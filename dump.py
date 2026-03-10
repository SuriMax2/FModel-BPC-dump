import os
import json
import re

def generar_header_limpio():
    arbol_categorias = {'items': [], 'subcats': {}}
    directorio_raiz = os.getcwd()

    for raiz, _, archivos in os.walk(directorio_raiz):
        for nombre_archivo in archivos:
            if nombre_archivo.endswith('.json'):
                ruta_completa = os.path.join(raiz, nombre_archivo)
                try:
                    with open(ruta_completa, 'r', encoding='utf-8') as f:
                        data = json.load(f)
                        elementos = data if isinstance(data, list) else [data]

                        for item in elementos:
                            cls = item.get("Class", "")
                            obj_type = item.get("Type", "")

                            if "BlueprintGeneratedClass" in cls and obj_type != "BlueprintGeneratedClass":
                                match_path = re.search(r"'(.*?)'", cls)
                                if match_path:
                                    full_path = match_path.group(1)
                                    
                                    if full_path.split('.')[-1] == obj_type:
                                        ruta_relativa = os.path.relpath(raiz, directorio_raiz)
                                        partes = [p for p in ruta_relativa.split(os.sep) if p and p != '.']
                                        
                                        nodo_actual = arbol_categorias
                                        for p in partes:
                                            if p not in nodo_actual['subcats']:
                                                nodo_actual['subcats'][p] = {'items': [], 'subcats': {}}
                                            nodo_actual = nodo_actual['subcats'][p]
                                        
                                        nodo_actual['items'].append({"name": obj_type, "path": full_path})
                except Exception as e:
                    print(f"Error en {nombre_archivo}: {e}")

    def escribir_nodo(f, nombre, nodo, indent):
        espacios = "    " * indent
        f.write(f"{espacios}{{\"{nombre}\",\n")
        
        # Subcategorías
        f.write(f"{espacios}    {{\n")
        subcats_sorted = sorted(nodo['subcats'].keys())
        for i, sub_nombre in enumerate(subcats_sorted):
            escribir_nodo(f, sub_nombre, nodo['subcats'][sub_nombre], indent + 2)
            if i < len(subcats_sorted) - 1:
                f.write(",\n")
            else:
                f.write("\n")
        f.write(f"{espacios}    }},\n")
        
        # Items
        f.write(f"{espacios}    {{\n")
        items_sorted = sorted(nodo['items'], key=lambda x: x['name'])
        for i, item in enumerate(items_sorted):
            f.write(f"{espacios}        {{\"{item['name']}\", \"{item['path']}\"}}")
            if i < len(items_sorted) - 1:
                f.write(",\n")
            else:
                f.write("\n")
        f.write(f"{espacios}    }}\n")
        f.write(f"{espacios}}}")


    # Generar el archivo .h
    with open('GeneratedItems.h', 'w', encoding='utf-8') as h_file:
        h_file.write("#pragma once\n#include <string>\n#include <vector>\n\n")
        h_file.write("struct ModItem {\n    std::string name;\n    std::string fullPath;\n};\n\n")
        h_file.write("struct Category {\n    std::string categoryName;\n    std::vector<Category> subCategories;\n    std::vector<ModItem> items;\n};\n\n")

        h_file.write("inline Category GItemDatabase = \n")
        escribir_nodo(h_file, "Root", arbol_categorias, 0)
        h_file.write(";\n")

    print("GeneratedItems.h has been created!")

if __name__ == "__main__":
    generar_header_limpio()
