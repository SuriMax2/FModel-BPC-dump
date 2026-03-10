//Generate Item list for Dead Island 2 - Used to spawn stuff in game using engine functions.
//THIS IS JUST A HELPER .h to populate the UI menu Canvas/ImGui using a combo or any ato spawn.
//The fullPath as know for BP spawm should be converted to wstring -> const wchar_t*
#pragma once
#include <string>
#include <vector>

struct ModItem {
    std::string name;
    std::string fullPath;
};

struct Category {
    std::string categoryName;
    std::vector<Category> subCategories;
    std::vector<ModItem> items;
};

inline Category GItemDatabase = 
{"Root",
    {
        {"Items",
            {
                {"Consumables",
                    {
                    },
                    {
                        {"BP_Base_KeyItem_C", "/Game/DI2/Items/Consumables/BP_Base_KeyItem.BP_Base_KeyItem_C"},
                        {"BP_HealthPackItem_C", "/Game/DI2/Items/Consumables/BP_HealthPackItem.BP_HealthPackItem_C"}
                    }
                },
                {"ExoticMaterials",
                    {
                        {"ExoticMaterialPickupActors",
                            {
                            },
                            {
                                {"BP_ItemPickup_ExoticMaterials_BladeArm_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_BladeArm.BP_ItemPickup_ExoticMaterials_BladeArm_C"},
                                {"BP_ItemPickup_ExoticMaterials_BlastGland_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_BlastGland.BP_ItemPickup_ExoticMaterials_BlastGland_C"},
                                {"BP_ItemPickup_ExoticMaterials_BloatedSpleen_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_BloatedSpleen.BP_ItemPickup_ExoticMaterials_BloatedSpleen_C"},
                                {"BP_ItemPickup_ExoticMaterials_CombustibleFluid_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_CombustibleFluid.BP_ItemPickup_ExoticMaterials_CombustibleFluid_C"},
                                {"BP_ItemPickup_ExoticMaterials_CorrosiveFluid_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_CorrosiveFluid.BP_ItemPickup_ExoticMaterials_CorrosiveFluid_C"},
                                {"BP_ItemPickup_ExoticMaterials_DamagedImplants_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_DamagedImplants.BP_ItemPickup_ExoticMaterials_DamagedImplants_C"},
                                {"BP_ItemPickup_ExoticMaterials_ElectrifiedBrain_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_ElectrifiedBrain.BP_ItemPickup_ExoticMaterials_ElectrifiedBrain_C"},
                                {"BP_ItemPickup_ExoticMaterials_InfectedBlood_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_InfectedBlood.BP_ItemPickup_ExoticMaterials_InfectedBlood_C"},
                                {"BP_ItemPickup_ExoticMaterials_InfectedFlesh_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_InfectedFlesh.BP_ItemPickup_ExoticMaterials_InfectedFlesh_C"},
                                {"BP_ItemPickup_ExoticMaterials_InfectedSinew_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_InfectedSinew.BP_ItemPickup_ExoticMaterials_InfectedSinew_C"},
                                {"BP_ItemPickup_ExoticMaterials_InfectedSpine_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_InfectedSpine.BP_ItemPickup_ExoticMaterials_InfectedSpine_C"},
                                {"BP_ItemPickup_ExoticMaterials_InsectLarva_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_InsectLarva.BP_ItemPickup_ExoticMaterials_InsectLarva_C"},
                                {"BP_ItemPickup_ExoticMaterials_MutatedHeart_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_MutatedHeart.BP_ItemPickup_ExoticMaterials_MutatedHeart_C"},
                                {"BP_ItemPickup_ExoticMaterials_OversizedArmBone_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_OversizedArmBone.BP_ItemPickup_ExoticMaterials_OversizedArmBone_C"},
                                {"BP_ItemPickup_ExoticMaterials_RegeneratingTissue_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_RegeneratingTissue.BP_ItemPickup_ExoticMaterials_RegeneratingTissue_C"},
                                {"BP_ItemPickup_ExoticMaterials_ScreamerLungs_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_ScreamerLungs.BP_ItemPickup_ExoticMaterials_ScreamerLungs_C"},
                                {"BP_ItemPickup_ExoticMaterials_ToxicGallbladder_C", "/Game/DI2/Items/ExoticMaterials/ExoticMaterialPickupActors/BP_ItemPickup_ExoticMaterials_ToxicGallbladder.BP_ItemPickup_ExoticMaterials_ToxicGallbladder_C"}
                            }
                        }
                    },
                    {
                        {"BP_ItemActor_ExoticMaterials_BladeArm_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_BladeArm.BP_ItemActor_ExoticMaterials_BladeArm_C"},
                        {"BP_ItemActor_ExoticMaterials_BlastGland_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_BlastGland.BP_ItemActor_ExoticMaterials_BlastGland_C"},
                        {"BP_ItemActor_ExoticMaterials_BloatedSpleen_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_BloatedSpleen.BP_ItemActor_ExoticMaterials_BloatedSpleen_C"},
                        {"BP_ItemActor_ExoticMaterials_CombustibleFluid_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_CombustibleFluid.BP_ItemActor_ExoticMaterials_CombustibleFluid_C"},
                        {"BP_ItemActor_ExoticMaterials_CorrosiveFluid_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_CorrosiveFluid.BP_ItemActor_ExoticMaterials_CorrosiveFluid_C"},
                        {"BP_ItemActor_ExoticMaterials_DamagedImplants_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_DamagedImplants.BP_ItemActor_ExoticMaterials_DamagedImplants_C"},
                        {"BP_ItemActor_ExoticMaterials_ElectrifiedBrain_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_ElectrifiedBrain.BP_ItemActor_ExoticMaterials_ElectrifiedBrain_C"},
                        {"BP_ItemActor_ExoticMaterials_InfectedBlood_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_InfectedBlood.BP_ItemActor_ExoticMaterials_InfectedBlood_C"},
                        {"BP_ItemActor_ExoticMaterials_InfectedFlesh_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_InfectedFlesh.BP_ItemActor_ExoticMaterials_InfectedFlesh_C"},
                        {"BP_ItemActor_ExoticMaterials_InfectedSinew_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_InfectedSinew.BP_ItemActor_ExoticMaterials_InfectedSinew_C"},
                        {"BP_ItemActor_ExoticMaterials_InfectedSpine_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_InfectedSpine.BP_ItemActor_ExoticMaterials_InfectedSpine_C"},
                        {"BP_ItemActor_ExoticMaterials_InsectLarva_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_InsectLarva.BP_ItemActor_ExoticMaterials_InsectLarva_C"},
                        {"BP_ItemActor_ExoticMaterials_MutatedHeart_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_MutatedHeart.BP_ItemActor_ExoticMaterials_MutatedHeart_C"},
                        {"BP_ItemActor_ExoticMaterials_OversizedArmBone_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_OversizedArmBone.BP_ItemActor_ExoticMaterials_OversizedArmBone_C"},
                        {"BP_ItemActor_ExoticMaterials_RegeneratingTissue_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_RegeneratingTissue.BP_ItemActor_ExoticMaterials_RegeneratingTissue_C"},
                        {"BP_ItemActor_ExoticMaterials_ScreamerLungs_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_ScreamerLungs.BP_ItemActor_ExoticMaterials_ScreamerLungs_C"},
                        {"BP_ItemActor_ExoticMaterials_ToxicGallbladder_C", "/Game/DI2/Items/ExoticMaterials/BP_ItemActor_ExoticMaterials_ToxicGallbladder.BP_ItemActor_ExoticMaterials_ToxicGallbladder_C"}
                    }
                },
                {"Ingredients",
                    {
                        {"IngredientPickupActors",
                            {
                            },
                            {
                                {"BP_ItemPickup_Ingredients_Adhesive_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Adhesive.BP_ItemPickup_Ingredients_Adhesive_C"},
                                {"BP_ItemPickup_Ingredients_Aerosol_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Aerosol.BP_ItemPickup_Ingredients_Aerosol_C"},
                                {"BP_ItemPickup_Ingredients_Alloy_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Alloy.BP_ItemPickup_Ingredients_Alloy_C"},
                                {"BP_ItemPickup_Ingredients_Blades_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Blades.BP_ItemPickup_Ingredients_Blades_C"},
                                {"BP_ItemPickup_Ingredients_Chemicals_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Chemicals.BP_ItemPickup_Ingredients_Chemicals_C"},
                                {"BP_ItemPickup_Ingredients_Electronics_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Electronics.BP_ItemPickup_Ingredients_Electronics_C"},
                                {"BP_ItemPickup_Ingredients_Fabric_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Fabric.BP_ItemPickup_Ingredients_Fabric_C"},
                                {"BP_ItemPickup_Ingredients_Fasteners_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Fasteners.BP_ItemPickup_Ingredients_Fasteners_C"},
                                {"BP_ItemPickup_Ingredients_Gunpowder_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Gunpowder.BP_ItemPickup_Ingredients_Gunpowder_C"},
                                {"BP_ItemPickup_Ingredients_MetalParts_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_MetalParts.BP_ItemPickup_Ingredients_MetalParts_C"},
                                {"BP_ItemPickup_Ingredients_Scrap_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Scrap.BP_ItemPickup_Ingredients_Scrap_C"},
                                {"BP_ItemPickup_Ingredients_SyntheticFibres_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_SyntheticFibres.BP_ItemPickup_Ingredients_SyntheticFibres_C"},
                                {"BP_ItemPickup_Ingredients_Wire_C", "/Game/DI2/Items/Ingredients/IngredientPickupActors/BP_ItemPickup_Ingredients_Wire.BP_ItemPickup_Ingredients_Wire_C"}
                            }
                        }
                    },
                    {
                        {"BP_ItemActor_Ingredients_Adhesive_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Adhesive.BP_ItemActor_Ingredients_Adhesive_C"},
                        {"BP_ItemActor_Ingredients_Aerosol_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Aerosol.BP_ItemActor_Ingredients_Aerosol_C"},
                        {"BP_ItemActor_Ingredients_Alloy_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Alloy.BP_ItemActor_Ingredients_Alloy_C"},
                        {"BP_ItemActor_Ingredients_Blades_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Blades.BP_ItemActor_Ingredients_Blades_C"},
                        {"BP_ItemActor_Ingredients_Chemicals_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Chemicals.BP_ItemActor_Ingredients_Chemicals_C"},
                        {"BP_ItemActor_Ingredients_Electronics_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Electronics.BP_ItemActor_Ingredients_Electronics_C"},
                        {"BP_ItemActor_Ingredients_Fabric_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Fabric.BP_ItemActor_Ingredients_Fabric_C"},
                        {"BP_ItemActor_Ingredients_Fasteners_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Fasteners.BP_ItemActor_Ingredients_Fasteners_C"},
                        {"BP_ItemActor_Ingredients_Gunpowder_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Gunpowder.BP_ItemActor_Ingredients_Gunpowder_C"},
                        {"BP_ItemActor_Ingredients_MetalParts_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_MetalParts.BP_ItemActor_Ingredients_MetalParts_C"},
                        {"BP_ItemActor_Ingredients_Scrap_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Scrap.BP_ItemActor_Ingredients_Scrap_C"},
                        {"BP_ItemActor_Ingredients_SyntheticFibres_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_SyntheticFibres.BP_ItemActor_Ingredients_SyntheticFibres_C"},
                        {"BP_ItemActor_Ingredients_Wire_C", "/Game/DI2/Items/Ingredients/BP_ItemActor_Ingredients_Wire.BP_ItemActor_Ingredients_Wire_C"}
                    }
                },
                {"MeleeWeapons",
                    {
                        {"Axes",
                            {
                                {"Axe",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Axe_C", "/Game/DI2/Items/MeleeWeapons/Axes/Axe/BP_MeleeWeapon_Axe.BP_MeleeWeapon_Axe_C"}
                                    }
                                },
                                {"FireAxe",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_FireAxe_C", "/Game/DI2/Items/MeleeWeapons/Axes/FireAxe/BP_MeleeWeapon_FireAxe.BP_MeleeWeapon_FireAxe_C"}
                                    }
                                },
                                {"Legendary",
                                    {
                                        {"Scythe",
                                            {
                                            },
                                            {
                                                {"BP_MeleeWeapon_LegendaryScythe_C", "/Game/DI2/Items/MeleeWeapons/Axes/Legendary/Scythe/BP_MeleeWeapon_LegendaryScythe.BP_MeleeWeapon_LegendaryScythe_C"}
                                            }
                                        }
                                    },
                                    {
                                    }
                                },
                                {"Mattock",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Mattock_C", "/Game/DI2/Items/MeleeWeapons/Axes/Mattock/BP_MeleeWeapon_Mattock.BP_MeleeWeapon_Mattock_C"}
                                    }
                                },
                                {"MilitaryAxe",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_MilitaryAxe_C", "/Game/DI2/Items/MeleeWeapons/Axes/MilitaryAxe/BP_MeleeWeapon_MilitaryAxe.BP_MeleeWeapon_MilitaryAxe_C"}
                                    }
                                },
                                {"PickAxe",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Pickaxe_C", "/Game/DI2/Items/MeleeWeapons/Axes/Pickaxe/BP_MeleeWeapon_Pickaxe.BP_MeleeWeapon_Pickaxe_C"}
                                    }
                                },
                                {"Shovel",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Shovel_C", "/Game/DI2/Items/MeleeWeapons/Axes/Shovel/BP_MeleeWeapon_Shovel.BP_MeleeWeapon_Shovel_C"}
                                    }
                                },
                                {"SplittingAxe",
                                    {
                                    },
                                    {
                                        {"BP_SplittingAxe_C", "/Game/DI2/Items/MeleeWeapons/Axes/SplittingAxe/BP_SplittingAxe.BP_SplittingAxe_C"}
                                    }
                                },
                                {"ZombieAxe",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ZombieAxe_C", "/Game/DI2/Items/MeleeWeapons/Axes/ZombieAxe/BP_MeleeWeapon_ZombieAxe.BP_MeleeWeapon_ZombieAxe_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Clubs",
                            {
                                {"BurntTimberBeam",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_BurntTimberBeam_C", "/Game/DI2/Items/MeleeWeapons/Clubs/BurntTimberBeam/BP_MeleeWeapon_BurntTimberBeam.BP_MeleeWeapon_BurntTimberBeam_C"}
                                    }
                                },
                                {"Crowbar",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Crowbar_C", "/Game/DI2/Items/MeleeWeapons/Clubs/Crowbar/BP_MeleeWeapon_Crowbar.BP_MeleeWeapon_Crowbar_C"}
                                    }
                                },
                                {"Cudgel",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Cudgel_C", "/Game/DI2/Items/MeleeWeapons/Clubs/Cudgel/BP_MeleeWeapon_Cudgel.BP_MeleeWeapon_Cudgel_C"}
                                    }
                                },
                                {"GolfClub",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_GolfClub_C", "/Game/DI2/Items/MeleeWeapons/Clubs/GolfClub/BP_MeleeWeapon_GolfClub.BP_MeleeWeapon_GolfClub_C"}
                                    }
                                },
                                {"HeavyWrench",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_HeavyWrench_C", "/Game/DI2/Items/MeleeWeapons/Clubs/HeavyWrench/BP_MeleeWeapon_HeavyWrench.BP_MeleeWeapon_HeavyWrench_C"}
                                    }
                                },
                                {"Legendary",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_LegendarySawBat_C", "/Game/DI2/Items/MeleeWeapons/Clubs/Legendary/BP_MeleeWeapon_LegendarySawBat.BP_MeleeWeapon_LegendarySawBat_C"}
                                    }
                                },
                                {"Mace",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Mace_C", "/Game/DI2/Items/MeleeWeapons/Clubs/Mace/BP_MeleeWeapon_Mace.BP_MeleeWeapon_Mace_C"}
                                    }
                                },
                                {"MetalBaseballBat",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_BaseballBatMetal_C", "/Game/DI2/Items/MeleeWeapons/Clubs/MetalBaseballBat/BP_MeleeWeapon_BaseballBatMetal.BP_MeleeWeapon_BaseballBatMetal_C"}
                                    }
                                },
                                {"NightStick",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ExtNightStick_C", "/Game/DI2/Items/MeleeWeapons/Clubs/NightStick/BP_MeleeWeapon_ExtNightStick.BP_MeleeWeapon_ExtNightStick_C"}
                                    }
                                },
                                {"PoliceBaton",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_PoliceBaton_C", "/Game/DI2/Items/MeleeWeapons/Clubs/PoliceBaton/BP_MeleeWeapon_PoliceBaton.BP_MeleeWeapon_PoliceBaton_C"}
                                    }
                                },
                                {"Rebar",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Rebar_C", "/Game/DI2/Items/MeleeWeapons/Clubs/Rebar/BP_MeleeWeapon_Rebar.BP_MeleeWeapon_Rebar_C"}
                                    }
                                },
                                {"SmallWrench",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_SmallWrench_C", "/Game/DI2/Items/MeleeWeapons/Clubs/SmallWrench/BP_MeleeWeapon_SmallWrench.BP_MeleeWeapon_SmallWrench_C"}
                                    }
                                },
                                {"SteelPipe",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_SteelPipe_C", "/Game/DI2/Items/MeleeWeapons/Clubs/SteelPipe/BP_MeleeWeapon_SteelPipe.BP_MeleeWeapon_SteelPipe_C"}
                                    }
                                },
                                {"TireIron",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_TireIron_C", "/Game/DI2/Items/MeleeWeapons/Clubs/TireIron/BP_MeleeWeapon_TireIron.BP_MeleeWeapon_TireIron_C"}
                                    }
                                },
                                {"WoodBaseballBat",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_WoodBaseballBat_C", "/Game/DI2/Items/MeleeWeapons/Clubs/WoodBaseballBat/BP_MeleeWeapon_WoodBaseballBat.BP_MeleeWeapon_WoodBaseballBat_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Daggers",
                            {
                                {"Dagger",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Dagger_C", "/Game/DI2/Items/MeleeWeapons/Daggers/Dagger/BP_MeleeWeapon_Dagger.BP_MeleeWeapon_Dagger_C"}
                                    }
                                },
                                {"HuntingKnife",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_HuntingKnife_C", "/Game/DI2/Items/MeleeWeapons/Daggers/HuntingKnife/BP_MeleeWeapon_HuntingKnife.BP_MeleeWeapon_HuntingKnife_C"}
                                    }
                                },
                                {"MilitaryKnife",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Legendary_Stiletto_C", "/Game/DI2/Items/MeleeWeapons/Daggers/MilitaryKnife/BP_MeleeWeapon_Legendary_Stiletto.BP_MeleeWeapon_Legendary_Stiletto_C"},
                                        {"BP_MeleeWeapon_MilitaryKnife_C", "/Game/DI2/Items/MeleeWeapons/Daggers/MilitaryKnife/BP_MeleeWeapon_MilitaryKnife.BP_MeleeWeapon_MilitaryKnife_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Fists",
                            {
                                {"BareHands",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_BareHands_C", "/Game/DI2/Items/MeleeWeapons/Fists/BareHands/BP_MeleeWeapon_BareHands.BP_MeleeWeapon_BareHands_C"}
                                    }
                                },
                                {"BrassKnuckles",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_BrassKnuckles_C", "/Game/DI2/Items/MeleeWeapons/Fists/BrassKnuckles/BP_MeleeWeapon_BrassKnuckles.BP_MeleeWeapon_BrassKnuckles_C"}
                                    }
                                },
                                {"Claws",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Claws_C", "/Game/DI2/Items/MeleeWeapons/Fists/Claws/BP_MeleeWeapon_Claws.BP_MeleeWeapon_Claws_C"}
                                    }
                                },
                                {"CrescentBlade",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_CrescentBlade_C", "/Game/DI2/Items/MeleeWeapons/Fists/CrescentBlade/BP_MeleeWeapon_CrescentBlade.BP_MeleeWeapon_CrescentBlade_C"}
                                    }
                                },
                                {"FuryFists",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_FuryFists_C", "/Game/DI2/Items/MeleeWeapons/Fists/FuryFists/BP_MeleeWeapon_FuryFists.BP_MeleeWeapon_FuryFists_C"}
                                    }
                                },
                                {"Katar",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Katar_C", "/Game/DI2/Items/MeleeWeapons/Fists/Katar/BP_MeleeWeapon_Katar.BP_MeleeWeapon_Katar_C"}
                                    }
                                },
                                {"Legendary",
                                    {
                                        {"PartyStarter",
                                            {
                                            },
                                            {
                                                {"BP_MeleeWeapon_LegendaryFireKnuckles_C", "/Game/DI2/Items/MeleeWeapons/Fists/Legendary/PartyStarter/BP_MeleeWeapon_LegendaryFireKnuckles.BP_MeleeWeapon_LegendaryFireKnuckles_C"}
                                            }
                                        }
                                    },
                                    {
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Hammers",
                            {
                                {"ClawHammer",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ClawHammer_C", "/Game/DI2/Items/MeleeWeapons/Hammers/ClawHammer/BP_MeleeWeapon_ClawHammer.BP_MeleeWeapon_ClawHammer_C"}
                                    }
                                },
                                {"CompositeSledgehammer",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeaponSoftFob_C", "/Game/DIShared/Items/MeleeWeapon/SoftFobs/BP_MeleeWeaponSoftFob.BP_MeleeWeaponSoftFob_C"},
                                        {"BP_MeleeWeapon_CompositeSledgehammer_C", "/Game/DI2/Items/MeleeWeapons/Hammers/CompositeSledgehammer/BP_MeleeWeapon_CompositeSledgehammer.BP_MeleeWeapon_CompositeSledgehammer_C"}
                                    }
                                },
                                {"ImprovHammer",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ImprovHammer_C", "/Game/DI2/Items/MeleeWeapons/Hammers/ImprovHammer/BP_MeleeWeapon_ImprovHammer.BP_MeleeWeapon_ImprovHammer_C"}
                                    }
                                },
                                {"Legendary",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Legendary_Warhammer_C", "/Game/DI2/Items/MeleeWeapons/Hammers/Legendary/BP_MeleeWeapon_Legendary_Warhammer.BP_MeleeWeapon_Legendary_Warhammer_C"}
                                    }
                                },
                                {"LumpHammer",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_LumpHammer_C", "/Game/DI2/Items/MeleeWeapons/Hammers/LumpHammer/BP_MeleeWeapon_LumpHammer.BP_MeleeWeapon_LumpHammer_C"}
                                    }
                                },
                                {"MeatHammer",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_MeatHammer_C", "/Game/DI2/Items/MeleeWeapons/Hammers/MeatHammer/BP_MeleeWeapon_MeatHammer.BP_MeleeWeapon_MeatHammer_C"}
                                    }
                                },
                                {"RebarInConcrete",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_RebarInConcrete_C", "/Game/DI2/Items/MeleeWeapons/Hammers/RebarInConcrete/BP_MeleeWeapon_RebarInConcrete.BP_MeleeWeapon_RebarInConcrete_C"}
                                    }
                                },
                                {"SledgeHammer",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeaponSoftFob_C", "/Game/DIShared/Items/MeleeWeapon/SoftFobs/BP_MeleeWeaponSoftFob.BP_MeleeWeaponSoftFob_C"},
                                        {"BP_MeleeWeapon_Sledgehammer_C", "/Game/DI2/Items/MeleeWeapons/Hammers/Sledgehammer/BP_MeleeWeapon_Sledgehammer.BP_MeleeWeapon_Sledgehammer_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Knives",
                            {
                                {"BowieKnife",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_BowieKnife_C", "/Game/DI2/Items/MeleeWeapons/Knives/BowieKnife/BP_MeleeWeapon_BowieKnife.BP_MeleeWeapon_BowieKnife_C"}
                                    }
                                },
                                {"ChefsKnife",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ChefKnife_C", "/Game/DI2/Items/MeleeWeapons/Knives/ChefsKnife/BP_MeleeWeapon_ChefKnife.BP_MeleeWeapon_ChefKnife_C"}
                                    }
                                },
                                {"Cleaver",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Cleaver_C", "/Game/DI2/Items/MeleeWeapons/Knives/Cleaver/BP_MeleeWeapon_Cleaver.BP_MeleeWeapon_Cleaver_C"}
                                    }
                                },
                                {"DeerHornknife",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_DeerHornKnife_C", "/Game/DI2/Items/MeleeWeapons/Knives/DeerHornKnife/BP_MeleeWeapon_DeerHornKnife.BP_MeleeWeapon_DeerHornKnife_C"}
                                    }
                                },
                                {"Kukri",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Kukri_C", "/Game/DI2/Items/MeleeWeapons/Knives/Kukri/BP_MeleeWeapon_Kukri.BP_MeleeWeapon_Kukri_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Polearms",
                            {
                                {"HayFork",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_HayFork_C", "/Game/DI2/Items/MeleeWeapons/Polearms/HayFork/BP_MeleeWeapon_HayFork.BP_MeleeWeapon_HayFork_C"}
                                    }
                                },
                                {"Pike",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Pike_C", "/Game/DI2/Items/MeleeWeapons/Polearms/Pike/BP_MeleeWeapon_Pike.BP_MeleeWeapon_Pike_C"}
                                    }
                                },
                                {"PoolCue",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_PoolCue_C", "/Game/DI2/Items/MeleeWeapons/Polearms/PoolCue/BP_MeleeWeapon_PoolCue.BP_MeleeWeapon_PoolCue_C"}
                                    }
                                },
                                {"Rake",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Rake_C", "/Game/DI2/Items/MeleeWeapons/Polearms/Rake/BP_MeleeWeapon_Rake.BP_MeleeWeapon_Rake_C"}
                                    }
                                },
                                {"SingleBladeStaff",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_SingleBladeStaff_C", "/Game/DI2/Items/MeleeWeapons/Polearms/SingleBladeStaff/BP_MeleeWeapon_SingleBladeStaff.BP_MeleeWeapon_SingleBladeStaff_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Staffs",
                            {
                                {"BoStaff",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_BoStaff_C", "/Game/DI2/Items/MeleeWeapons/Staffs/BoStaff/BP_MeleeWeapon_BoStaff.BP_MeleeWeapon_BoStaff_C"}
                                    }
                                },
                                {"ScaffoldPole",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ScaffoldPole_C", "/Game/DI2/Items/MeleeWeapons/Staffs/ScaffoldPole/BP_MeleeWeapon_ScaffoldPole.BP_MeleeWeapon_ScaffoldPole_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Swords",
                            {
                                {"Claymore",
                                    {
                                        {"Legendary",
                                            {
                                            },
                                            {
                                                {"BP_MeleeWeapon_Legendary2HSword_C", "/Game/DI2/Items/MeleeWeapons/Swords/Claymore/Legendary/BP_MeleeWeapon_Legendary2HSword.BP_MeleeWeapon_Legendary2HSword_C"}
                                            }
                                        }
                                    },
                                    {
                                        {"BP_MeleeWeapon_Claymore_C", "/Game/DI2/Items/MeleeWeapons/Swords/Claymore/BP_MeleeWeapon_Claymore.BP_MeleeWeapon_Claymore_C"}
                                    }
                                },
                                {"ImprovSword",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ImprovSword_C", "/Game/DI2/Items/MeleeWeapons/Swords/ImprovSword/BP_MeleeWeapon_ImprovSword.BP_MeleeWeapon_ImprovSword_C"}
                                    }
                                },
                                {"Katana",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Katana_C", "/Game/DI2/Items/MeleeWeapons/Swords/Katana/BP_MeleeWeapon_Katana.BP_MeleeWeapon_Katana_C"}
                                    }
                                },
                                {"Legendary",
                                    {
                                        {"LegendaryMachete",
                                            {
                                            },
                                            {
                                                {"BP_MeleeWeapon_LegendaryMachete_C", "/Game/DI2/Items/MeleeWeapons/Swords/Legendary/LegendaryMachete/BP_MeleeWeapon_LegendaryMachete.BP_MeleeWeapon_LegendaryMachete_C"}
                                            }
                                        }
                                    },
                                    {
                                    }
                                },
                                {"Machete",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Machete_C", "/Game/DI2/Items/MeleeWeapons/Swords/Machete/BP_MeleeWeapon_Machete.BP_MeleeWeapon_Machete_C"}
                                    }
                                },
                                {"OfficersSword",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_OfficersSword_C", "/Game/DI2/Items/MeleeWeapons/Swords/OfficersSword/BP_MeleeWeapon_OfficersSword.BP_MeleeWeapon_OfficersSword_C"}
                                    }
                                },
                                {"TacticalSword",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_TacticalSword_C", "/Game/DI2/Items/MeleeWeapons/Swords/TacticalSword/BP_MeleeWeapon_TacticalSword.BP_MeleeWeapon_TacticalSword_C"}
                                    }
                                },
                                {"Wakizashi",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_Wakizashi_C", "/Game/DI2/Items/MeleeWeapons/Swords/Wakizashi/BP_MeleeWeapon_Wakizashi.BP_MeleeWeapon_Wakizashi_C"}
                                    }
                                },
                                {"WhisperingBlade",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_WhisperingBlade_C", "/Game/DI2/Items/MeleeWeapons/Swords/WhisperingBlade/BP_MeleeWeapon_WhisperingBlade.BP_MeleeWeapon_WhisperingBlade_C"}
                                    }
                                },
                                {"ZombieSword",
                                    {
                                    },
                                    {
                                        {"BP_MeleeWeapon_ZombieSword_C", "/Game/DI2/Items/MeleeWeapons/Swords/ZombieSword/BP_MeleeWeapon_ZombieSword.BP_MeleeWeapon_ZombieSword_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"WeaponMods",
                            {
                                {"Base",
                                    {
                                    },
                                    {
                                        {"BP_Base_WeaponMod_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Base/BP_Base_WeaponMod.BP_Base_WeaponMod_C"}
                                    }
                                },
                                {"Fists_Group1",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Fists_Group1_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_AcidMod_Level1.BP_WeaponModActor_Fists_Group1_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group1_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_AcidMod_Level2.BP_WeaponModActor_Fists_Group1_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group1_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_AcidMod_Level3.BP_WeaponModActor_Fists_Group1_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group1_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_BleedMod_Level1.BP_WeaponModActor_Fists_Group1_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group1_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_BleedMod_Level2.BP_WeaponModActor_Fists_Group1_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group1_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_BleedMod_Level3.BP_WeaponModActor_Fists_Group1_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group1_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_FireMod_Level1.BP_WeaponModActor_Fists_Group1_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group1_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_FireMod_Level2.BP_WeaponModActor_Fists_Group1_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group1_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_FireMod_Level3.BP_WeaponModActor_Fists_Group1_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group1_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_ImpactMod_Level1.BP_WeaponModActor_Fists_Group1_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group1_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_ImpactMod_Level2.BP_WeaponModActor_Fists_Group1_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group1_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_ImpactMod_Level3.BP_WeaponModActor_Fists_Group1_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group1_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_ShockMod_Level1.BP_WeaponModActor_Fists_Group1_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group1_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_ShockMod_Level2.BP_WeaponModActor_Fists_Group1_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group1_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_ShockMod_Level3.BP_WeaponModActor_Fists_Group1_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group1_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_TearingMod_Level1.BP_WeaponModActor_Fists_Group1_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group1_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_TearingMod_Level2.BP_WeaponModActor_Fists_Group1_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group1_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group1/BP_WeaponModActor_Fists_Group1_TearingMod_Level3.BP_WeaponModActor_Fists_Group1_TearingMod_Level3_C"}
                                    }
                                },
                                {"Fists_Group2",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Fists_Group2_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_AcidMod_Level1.BP_WeaponModActor_Fists_Group2_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group2_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_AcidMod_Level2.BP_WeaponModActor_Fists_Group2_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group2_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_AcidMod_Level3.BP_WeaponModActor_Fists_Group2_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group2_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_FireMod_Level1.BP_WeaponModActor_Fists_Group2_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group2_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_FireMod_Level2.BP_WeaponModActor_Fists_Group2_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group2_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_FireMod_Level3.BP_WeaponModActor_Fists_Group2_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group2_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_ShockMod_Level1.BP_WeaponModActor_Fists_Group2_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group2_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_ShockMod_Level2.BP_WeaponModActor_Fists_Group2_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group2_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_ShockMod_Level3.BP_WeaponModActor_Fists_Group2_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group2_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_TearingMod_Level1.BP_WeaponModActor_Fists_Group2_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group2_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_TearingMod_Level2.BP_WeaponModActor_Fists_Group2_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group2_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group2/BP_WeaponModActor_Fists_Group2_TearingMod_Level3.BP_WeaponModActor_Fists_Group2_TearingMod_Level3_C"}
                                    }
                                },
                                {"Fists_Group3",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Fists_Group3_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group3/BP_WeaponModActor_Fists_Group3_ShockMod_Level1.BP_WeaponModActor_Fists_Group3_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group3_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group3/BP_WeaponModActor_Fists_Group3_ShockMod_Level2.BP_WeaponModActor_Fists_Group3_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group3_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group3/BP_WeaponModActor_Fists_Group3_ShockMod_Level3.BP_WeaponModActor_Fists_Group3_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Fists_Group3_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group3/BP_WeaponModActor_Fists_Group3_TearingMod_Level1.BP_WeaponModActor_Fists_Group3_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Fists_Group3_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group3/BP_WeaponModActor_Fists_Group3_TearingMod_Level2.BP_WeaponModActor_Fists_Group3_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Fists_Group3_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Fists_Group3/BP_WeaponModActor_Fists_Group3_TearingMod_Level3.BP_WeaponModActor_Fists_Group3_TearingMod_Level3_C"}
                                    }
                                },
                                {"Long2H_Group1",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Long2H_Group1_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_AcidMod_Level1.BP_WeaponModActor_Long2H_Group1_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_AcidMod_Level2.BP_WeaponModActor_Long2H_Group1_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_AcidMod_Level3.BP_WeaponModActor_Long2H_Group1_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_BleedMod_Level1.BP_WeaponModActor_Long2H_Group1_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_BleedMod_Level2.BP_WeaponModActor_Long2H_Group1_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_BleedMod_Level3.BP_WeaponModActor_Long2H_Group1_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_FireMod_Level1.BP_WeaponModActor_Long2H_Group1_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_FireMod_Level2.BP_WeaponModActor_Long2H_Group1_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_FireMod_Level3.BP_WeaponModActor_Long2H_Group1_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_ImpactMod_Level1.BP_WeaponModActor_Long2H_Group1_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_ImpactMod_Level2.BP_WeaponModActor_Long2H_Group1_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_ImpactMod_Level3.BP_WeaponModActor_Long2H_Group1_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_ShockMod_Level1.BP_WeaponModActor_Long2H_Group1_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_ShockMod_Level2.BP_WeaponModActor_Long2H_Group1_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_ShockMod_Level3.BP_WeaponModActor_Long2H_Group1_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_TearingMod_Level1.BP_WeaponModActor_Long2H_Group1_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_TearingMod_Level2.BP_WeaponModActor_Long2H_Group1_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group1_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group1/BP_WeaponModActor_Long2H_Group1_TearingMod_Level3.BP_WeaponModActor_Long2H_Group1_TearingMod_Level3_C"}
                                    }
                                },
                                {"Long2H_Group2",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Long2H_Group2_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_AcidMod_Level1.BP_WeaponModActor_Long2H_Group2_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_AcidMod_Level2.BP_WeaponModActor_Long2H_Group2_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_AcidMod_Level3.BP_WeaponModActor_Long2H_Group2_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_FireMod_Level1.BP_WeaponModActor_Long2H_Group2_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_FireMod_Level2.BP_WeaponModActor_Long2H_Group2_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_FireMod_Level3.BP_WeaponModActor_Long2H_Group2_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_ImpactMod_Level1.BP_WeaponModActor_Long2H_Group2_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_ImpactMod_Level2.BP_WeaponModActor_Long2H_Group2_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_ImpactMod_Level3.BP_WeaponModActor_Long2H_Group2_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_ShockMod_Level1.BP_WeaponModActor_Long2H_Group2_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_ShockMod_Level2.BP_WeaponModActor_Long2H_Group2_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_ShockMod_Level3.BP_WeaponModActor_Long2H_Group2_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_TearingMod_Level1.BP_WeaponModActor_Long2H_Group2_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_TearingMod_Level2.BP_WeaponModActor_Long2H_Group2_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group2_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group2/BP_WeaponModActor_Long2H_Group2_TearingMod_Level3.BP_WeaponModActor_Long2H_Group2_TearingMod_Level3_C"}
                                    }
                                },
                                {"Long2H_Group3",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Long2H_Group3_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group3/BP_WeaponModActor_Long2H_Group3_AcidMod_Level1.BP_WeaponModActor_Long2H_Group3_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group3_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group3/BP_WeaponModActor_Long2H_Group3_AcidMod_Level2.BP_WeaponModActor_Long2H_Group3_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group3_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group3/BP_WeaponModActor_Long2H_Group3_AcidMod_Level3.BP_WeaponModActor_Long2H_Group3_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Long2H_Group3_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group3/BP_WeaponModActor_Long2H_Group3_FireMod_Level1.BP_WeaponModActor_Long2H_Group3_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Long2H_Group3_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group3/BP_WeaponModActor_Long2H_Group3_FireMod_Level2.BP_WeaponModActor_Long2H_Group3_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Long2H_Group3_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Long2H_Group3/BP_WeaponModActor_Long2H_Group3_FireMod_Level3.BP_WeaponModActor_Long2H_Group3_FireMod_Level3_C"}
                                    }
                                },
                                {"Medium1H_Group1",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium1H_Group1_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_AcidMod_Level1.BP_WeaponModActor_Medium1H_Group1_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_AcidMod_Level2.BP_WeaponModActor_Medium1H_Group1_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_AcidMod_Level3.BP_WeaponModActor_Medium1H_Group1_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_BleedMod_Level1.BP_WeaponModActor_Medium1H_Group1_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_BleedMod_Level2.BP_WeaponModActor_Medium1H_Group1_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_BleedMod_Level3.BP_WeaponModActor_Medium1H_Group1_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_FireMod_Level1.BP_WeaponModActor_Medium1H_Group1_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_FireMod_Level2.BP_WeaponModActor_Medium1H_Group1_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_FireMod_Level3.BP_WeaponModActor_Medium1H_Group1_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level1.BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level2.BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level3.BP_WeaponModActor_Medium1H_Group1_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_ShockMod_Level1.BP_WeaponModActor_Medium1H_Group1_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_ShockMod_Level2.BP_WeaponModActor_Medium1H_Group1_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_ShockMod_Level3.BP_WeaponModActor_Medium1H_Group1_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_TearingMod_Level1.BP_WeaponModActor_Medium1H_Group1_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_TearingMod_Level2.BP_WeaponModActor_Medium1H_Group1_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group1_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group1/BP_WeaponModActor_Medium1H_Group1_TearingMod_Level3.BP_WeaponModActor_Medium1H_Group1_TearingMod_Level3_C"}
                                    }
                                },
                                {"Medium1H_Group2",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium1H_Group2_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_AcidMod_Level1.BP_WeaponModActor_Medium1H_Group2_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_AcidMod_Level2.BP_WeaponModActor_Medium1H_Group2_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_AcidMod_Level3.BP_WeaponModActor_Medium1H_Group2_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_BleedMod_Level1.BP_WeaponModActor_Medium1H_Group2_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_BleedMod_Level2.BP_WeaponModActor_Medium1H_Group2_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_BleedMod_Level3.BP_WeaponModActor_Medium1H_Group2_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_FireMod_Level1.BP_WeaponModActor_Medium1H_Group2_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_FireMod_Level2.BP_WeaponModActor_Medium1H_Group2_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_FireMod_Level3.BP_WeaponModActor_Medium1H_Group2_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level1.BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level2.BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level3.BP_WeaponModActor_Medium1H_Group2_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_ShockMod_Level1.BP_WeaponModActor_Medium1H_Group2_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_ShockMod_Level2.BP_WeaponModActor_Medium1H_Group2_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_ShockMod_Level3.BP_WeaponModActor_Medium1H_Group2_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_TearingMod_Level1.BP_WeaponModActor_Medium1H_Group2_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_TearingMod_Level2.BP_WeaponModActor_Medium1H_Group2_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group2_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group2/BP_WeaponModActor_Medium1H_Group2_TearingMod_Level3.BP_WeaponModActor_Medium1H_Group2_TearingMod_Level3_C"}
                                    }
                                },
                                {"Medium1H_Group3",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium1H_Group3_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_BleedMod_Level1.BP_WeaponModActor_Medium1H_Group3_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_BleedMod_Level2.BP_WeaponModActor_Medium1H_Group3_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_BleedMod_Level3.BP_WeaponModActor_Medium1H_Group3_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level1.BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level2.BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level3.BP_WeaponModActor_Medium1H_Group3_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_ShockMod_Level1.BP_WeaponModActor_Medium1H_Group3_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_ShockMod_Level2.BP_WeaponModActor_Medium1H_Group3_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group3_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group3/BP_WeaponModActor_Medium1H_Group3_ShockMod_Level3.BP_WeaponModActor_Medium1H_Group3_ShockMod_Level3_C"}
                                    }
                                },
                                {"Medium1H_Group4",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium1H_Group4_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_BleedMod_Level1.BP_WeaponModActor_Medium1H_Group4_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_BleedMod_Level2.BP_WeaponModActor_Medium1H_Group4_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_BleedMod_Level3.BP_WeaponModActor_Medium1H_Group4_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_FireMod_Level1.BP_WeaponModActor_Medium1H_Group4_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_FireMod_Level2.BP_WeaponModActor_Medium1H_Group4_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_FireMod_Level3.BP_WeaponModActor_Medium1H_Group4_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level1.BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level2.BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level3.BP_WeaponModActor_Medium1H_Group4_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_ShockMod_Level1.BP_WeaponModActor_Medium1H_Group4_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_ShockMod_Level2.BP_WeaponModActor_Medium1H_Group4_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group4_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group4/BP_WeaponModActor_Medium1H_Group4_ShockMod_Level3.BP_WeaponModActor_Medium1H_Group4_ShockMod_Level3_C"}
                                    }
                                },
                                {"Medium1H_Group5",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium1H_Group5_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group5/BP_WeaponModActor_Medium1H_Group5_FireMod_Level1.BP_WeaponModActor_Medium1H_Group5_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group5_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group5/BP_WeaponModActor_Medium1H_Group5_FireMod_Level2.BP_WeaponModActor_Medium1H_Group5_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group5_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group5/BP_WeaponModActor_Medium1H_Group5_FireMod_Level3.BP_WeaponModActor_Medium1H_Group5_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium1H_Group5_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group5/BP_WeaponModActor_Medium1H_Group5_ShockMod_Level1.BP_WeaponModActor_Medium1H_Group5_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium1H_Group5_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group5/BP_WeaponModActor_Medium1H_Group5_ShockMod_Level2.BP_WeaponModActor_Medium1H_Group5_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium1H_Group5_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium1H_Group5/BP_WeaponModActor_Medium1H_Group5_ShockMod_Level3.BP_WeaponModActor_Medium1H_Group5_ShockMod_Level3_C"}
                                    }
                                },
                                {"Medium2H_Group1",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium2H_Group1_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_AcidMod_Level1.BP_WeaponModActor_Medium2H_Group1_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_AcidMod_Level2.BP_WeaponModActor_Medium2H_Group1_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_AcidMod_Level3.BP_WeaponModActor_Medium2H_Group1_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_BleedMod_Level1.BP_WeaponModActor_Medium2H_Group1_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_BleedMod_Level2.BP_WeaponModActor_Medium2H_Group1_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_BleedMod_Level3.BP_WeaponModActor_Medium2H_Group1_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_FireMod_Level1.BP_WeaponModActor_Medium2H_Group1_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_FireMod_Level2.BP_WeaponModActor_Medium2H_Group1_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_FireMod_Level3.BP_WeaponModActor_Medium2H_Group1_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level1.BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level2.BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level3.BP_WeaponModActor_Medium2H_Group1_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_ShockMod_Level1.BP_WeaponModActor_Medium2H_Group1_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_ShockMod_Level2.BP_WeaponModActor_Medium2H_Group1_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_ShockMod_Level3.BP_WeaponModActor_Medium2H_Group1_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_TearingMod_Level1.BP_WeaponModActor_Medium2H_Group1_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_TearingMod_Level2.BP_WeaponModActor_Medium2H_Group1_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group1_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group1/BP_WeaponModActor_Medium2H_Group1_TearingMod_Level3.BP_WeaponModActor_Medium2H_Group1_TearingMod_Level3_C"}
                                    }
                                },
                                {"Medium2H_Group2",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium2H_Group2_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_AcidMod_Level1.BP_WeaponModActor_Medium2H_Group2_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_AcidMod_Level2.BP_WeaponModActor_Medium2H_Group2_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_AcidMod_Level3.BP_WeaponModActor_Medium2H_Group2_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_BleedMod_Level1.BP_WeaponModActor_Medium2H_Group2_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_BleedMod_Level2.BP_WeaponModActor_Medium2H_Group2_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_BleedMod_Level3.BP_WeaponModActor_Medium2H_Group2_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_FireMod_Level1.BP_WeaponModActor_Medium2H_Group2_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_FireMod_Level2.BP_WeaponModActor_Medium2H_Group2_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_FireMod_Level3.BP_WeaponModActor_Medium2H_Group2_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level1.BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level2.BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group2/BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level3.BP_WeaponModActor_Medium2H_Group2_ImpactMod_Level3_C"}
                                    }
                                },
                                {"Medium2H_Group3",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium2H_Group3_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_AcidMod_Level1.BP_WeaponModActor_Medium2H_Group3_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_AcidMod_Level2.BP_WeaponModActor_Medium2H_Group3_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_AcidMod_Level3.BP_WeaponModActor_Medium2H_Group3_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_BleedMod_Level1.BP_WeaponModActor_Medium2H_Group3_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_BleedMod_Level2.BP_WeaponModActor_Medium2H_Group3_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_BleedMod_Level3.BP_WeaponModActor_Medium2H_Group3_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level1.BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level2.BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group3/BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level3.BP_WeaponModActor_Medium2H_Group3_ImpactMod_Level3_C"}
                                    }
                                },
                                {"Medium2H_Group4",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium2H_Group4_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group4/BP_WeaponModActor_Medium2H_Group4_BleedMod_Level1.BP_WeaponModActor_Medium2H_Group4_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group4_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group4/BP_WeaponModActor_Medium2H_Group4_BleedMod_Level2.BP_WeaponModActor_Medium2H_Group4_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group4_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group4/BP_WeaponModActor_Medium2H_Group4_BleedMod_Level3.BP_WeaponModActor_Medium2H_Group4_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group4/BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level1.BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group4/BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level2.BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group4/BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level3.BP_WeaponModActor_Medium2H_Group4_ImpactMod_Level3_C"}
                                    }
                                },
                                {"Medium2H_Group5",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Medium2H_Group5_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_BleedMod_Level1.BP_WeaponModActor_Medium2H_Group5_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_BleedMod_Level2.BP_WeaponModActor_Medium2H_Group5_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_BleedMod_Level3.BP_WeaponModActor_Medium2H_Group5_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_FireMod_Level1.BP_WeaponModActor_Medium2H_Group5_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_FireMod_Level2.BP_WeaponModActor_Medium2H_Group5_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_FireMod_Level3.BP_WeaponModActor_Medium2H_Group5_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level1.BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level2.BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Medium2H_Group5/BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level3.BP_WeaponModActor_Medium2H_Group5_ImpactMod_Level3_C"}
                                    }
                                },
                                {"Short1H_Group1",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Short1H_Group1_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_AcidMod_Level1.BP_WeaponModActor_Short1H_Group1_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_AcidMod_Level2.BP_WeaponModActor_Short1H_Group1_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_AcidMod_Level3.BP_WeaponModActor_Short1H_Group1_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_BleedMod_Level1.BP_WeaponModActor_Short1H_Group1_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_BleedMod_Level2.BP_WeaponModActor_Short1H_Group1_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_BleedMod_Level3.BP_WeaponModActor_Short1H_Group1_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_FireMod_Level1.BP_WeaponModActor_Short1H_Group1_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_FireMod_Level2.BP_WeaponModActor_Short1H_Group1_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_FireMod_Level3.BP_WeaponModActor_Short1H_Group1_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_ImpactMod_Level1.BP_WeaponModActor_Short1H_Group1_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_ImpactMod_Level2.BP_WeaponModActor_Short1H_Group1_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_ImpactMod_Level3.BP_WeaponModActor_Short1H_Group1_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_ShockMod_Level1.BP_WeaponModActor_Short1H_Group1_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_ShockMod_Level2.BP_WeaponModActor_Short1H_Group1_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_ShockMod_Level3.BP_WeaponModActor_Short1H_Group1_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_TearingMod_Level1.BP_WeaponModActor_Short1H_Group1_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_TearingMod_Level2.BP_WeaponModActor_Short1H_Group1_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group1_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group1/BP_WeaponModActor_Short1H_Group1_TearingMod_Level3.BP_WeaponModActor_Short1H_Group1_TearingMod_Level3_C"}
                                    }
                                },
                                {"Short1H_Group2",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Short1H_Group2_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_BleedMod_Level1.BP_WeaponModActor_Short1H_Group2_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_BleedMod_Level2.BP_WeaponModActor_Short1H_Group2_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_BleedMod_Level3.BP_WeaponModActor_Short1H_Group2_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_FireMod_Level1.BP_WeaponModActor_Short1H_Group2_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_FireMod_Level2.BP_WeaponModActor_Short1H_Group2_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_FireMod_Level3.BP_WeaponModActor_Short1H_Group2_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_ImpactMod_Level1.BP_WeaponModActor_Short1H_Group2_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_ImpactMod_Level2.BP_WeaponModActor_Short1H_Group2_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_ImpactMod_Level3.BP_WeaponModActor_Short1H_Group2_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_TearingMod_Level1.BP_WeaponModActor_Short1H_Group2_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_TearingMod_Level2.BP_WeaponModActor_Short1H_Group2_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group2_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group2/BP_WeaponModActor_Short1H_Group2_TearingMod_Level3.BP_WeaponModActor_Short1H_Group2_TearingMod_Level3_C"}
                                    }
                                },
                                {"Short1H_Group3",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Short1H_Group3_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_BleedMod_Level1.BP_WeaponModActor_Short1H_Group3_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_BleedMod_Level2.BP_WeaponModActor_Short1H_Group3_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_BleedMod_Level3.BP_WeaponModActor_Short1H_Group3_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_FireMod_Level1.BP_WeaponModActor_Short1H_Group3_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_FireMod_Level2.BP_WeaponModActor_Short1H_Group3_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_FireMod_Level3.BP_WeaponModActor_Short1H_Group3_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_ImpactMod_Level1.BP_WeaponModActor_Short1H_Group3_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_ImpactMod_Level2.BP_WeaponModActor_Short1H_Group3_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group3_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group3/BP_WeaponModActor_Short1H_Group3_ImpactMod_Level3.BP_WeaponModActor_Short1H_Group3_ImpactMod_Level3_C"}
                                    }
                                },
                                {"Short1H_Group4",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Short1H_Group4_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group4/BP_WeaponModActor_Short1H_Group4_FireMod_Level1.BP_WeaponModActor_Short1H_Group4_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group4_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group4/BP_WeaponModActor_Short1H_Group4_FireMod_Level2.BP_WeaponModActor_Short1H_Group4_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group4_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group4/BP_WeaponModActor_Short1H_Group4_FireMod_Level3.BP_WeaponModActor_Short1H_Group4_FireMod_Level3_C"}
                                    }
                                },
                                {"Short1H_Group5",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Short1H_Group5_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group5/BP_WeaponModActor_Short1H_Group5_BleedMod_Level1.BP_WeaponModActor_Short1H_Group5_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group5_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group5/BP_WeaponModActor_Short1H_Group5_BleedMod_Level2.BP_WeaponModActor_Short1H_Group5_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group5_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group5/BP_WeaponModActor_Short1H_Group5_BleedMod_Level3.BP_WeaponModActor_Short1H_Group5_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Short1H_Group5_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group5/BP_WeaponModActor_Short1H_Group5_FireMod_Level1.BP_WeaponModActor_Short1H_Group5_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Short1H_Group5_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group5/BP_WeaponModActor_Short1H_Group5_FireMod_Level2.BP_WeaponModActor_Short1H_Group5_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Short1H_Group5_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Short1H_Group5/BP_WeaponModActor_Short1H_Group5_FireMod_Level3.BP_WeaponModActor_Short1H_Group5_FireMod_Level3_C"}
                                    }
                                },
                                {"Weighty2H_Group1",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level1.BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level2.BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level3.BP_WeaponModActor_Weighty2H_Group1_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level1.BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level2.BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level3.BP_WeaponModActor_Weighty2H_Group1_BleedMod_Level3_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_FireMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_FireMod_Level1.BP_WeaponModActor_Weighty2H_Group1_FireMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_FireMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_FireMod_Level2.BP_WeaponModActor_Weighty2H_Group1_FireMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_FireMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_FireMod_Level3.BP_WeaponModActor_Weighty2H_Group1_FireMod_Level3_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level1.BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level2.BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level3.BP_WeaponModActor_Weighty2H_Group1_ImpactMod_Level3_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level1.BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level2.BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level3.BP_WeaponModActor_Weighty2H_Group1_ShockMod_Level3_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level1.BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level2.BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group1/BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level3.BP_WeaponModActor_Weighty2H_Group1_TearingMod_Level3_C"}
                                    }
                                },
                                {"Weighty2H_Group2",
                                    {
                                    },
                                    {
                                        {"BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group2/BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level1.BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group2/BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level2.BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group2/BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level3.BP_WeaponModActor_Weighty2H_Group2_AcidMod_Level3_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level1_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group2/BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level1.BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level1_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level2_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group2/BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level2.BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level2_C"},
                                        {"BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level3_C", "/Game/DI2/Items/MeleeWeapons/WeaponMods/Weighty2H_Group2/BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level3.BP_WeaponModActor_Weighty2H_Group2_ImpactMod_Level3_C"}
                                    }
                                }
                            },
                            {
                            }
                        }
                    },
                    {
                        {"BP_Base_MeleeWeapon_WithImpactResponse_C", "/Game/DI2/Items/MeleeWeapons/BP_Base_MeleeWeapon_WithImpactResponse.BP_Base_MeleeWeapon_WithImpactResponse_C"}
                    }
                },
                {"Pickups",
                    {
                        {"Crafting",
                            {
                            },
                            {
                                {"BP_ItemPickup_Recipe_Medikit_C", "/Game/DI2/Items/Pickups/Crafting/BP_ItemPickup_Recipe_Medikit.BP_ItemPickup_Recipe_Medikit_C"},
                                {"BP_ItemPickup_Throwable_C", "/Game/DI2/Items/Pickups/Crafting/BP_ItemPickup_Throwable.BP_ItemPickup_Throwable_C"}
                            }
                        }
                    },
                    {
                        {"BP_ItemPickup_Cash_C", "/Game/DI2/Items/Pickups/BP_ItemPickup_Cash.BP_ItemPickup_Cash_C"}
                    }
                },
                {"RangedWeapons",
                    {
                        {"Ammo",
                            {
                                {"CrossbowBolts",
                                    {
                                    },
                                    {
                                        {"BP_CrossbowBoltsAmmo_Item_C", "/Game/DI2/Items/RangedWeapons/Ammo/CrossbowBolts/BP_CrossbowBoltsAmmo_Item.BP_CrossbowBoltsAmmo_Item_C"},
                                        {"BP_ItemPickup_CrossbowBoltsAmmo_C", "/Game/DI2/Items/RangedWeapons/Ammo/CrossbowBolts/BP_ItemPickup_CrossbowBoltsAmmo.BP_ItemPickup_CrossbowBoltsAmmo_C"}
                                    }
                                },
                                {"HeavyRounds",
                                    {
                                    },
                                    {
                                        {"BP_HeavyRoundsAmmo_Item_C", "/Game/DI2/Items/RangedWeapons/Ammo/HeavyRounds/BP_HeavyRoundsAmmo_Item.BP_HeavyRoundsAmmo_Item_C"},
                                        {"BP_ItemPickup_HeavyRoundsAmmo_C", "/Game/DI2/Items/RangedWeapons/Ammo/HeavyRounds/BP_ItemPickup_HeavyRoundsAmmo.BP_ItemPickup_HeavyRoundsAmmo_C"}
                                    }
                                },
                                {"NailgunNails",
                                    {
                                    },
                                    {
                                        {"BP_ItemPickup_NailgunNailsAmmo_C", "/Game/DI2/Items/RangedWeapons/Ammo/NailgunNails/BP_ItemPickup_NailgunNailsAmmo.BP_ItemPickup_NailgunNailsAmmo_C"},
                                        {"BP_NailgunNailsAmmo_Item_C", "/Game/DI2/Items/RangedWeapons/Ammo/NailgunNails/BP_NailgunNailsAmmo_Item.BP_NailgunNailsAmmo_Item_C"}
                                    }
                                },
                                {"PistolRounds",
                                    {
                                    },
                                    {
                                        {"BP_ItemPickup_PistolAmmo_C", "/Game/DI2/Items/RangedWeapons/Ammo/PistolRounds/BP_ItemPickup_PistolAmmo.BP_ItemPickup_PistolAmmo_C"},
                                        {"BP_PistolAmmo_Item_C", "/Game/DI2/Items/RangedWeapons/Ammo/PistolRounds/BP_PistolAmmo_Item.BP_PistolAmmo_Item_C"}
                                    }
                                },
                                {"Rifle",
                                    {
                                    },
                                    {
                                        {"BP_CarbineAmmo_Item_C", "/Game/DI2/Items/RangedWeapons/Ammo/Rifle/BP_CarbineAmmo_Item.BP_CarbineAmmo_Item_C"},
                                        {"BP_ItemPickup_CarbineAmmo_C", "/Game/DI2/Items/RangedWeapons/Ammo/Rifle/BP_ItemPickup_CarbineAmmo.BP_ItemPickup_CarbineAmmo_C"}
                                    }
                                },
                                {"ShotgunRounds",
                                    {
                                    },
                                    {
                                        {"BP_ItemPickup_ShotgunAmmo_C", "/Game/DI2/Items/RangedWeapons/Ammo/ShotgunRounds/BP_ItemPickup_ShotgunAmmo.BP_ItemPickup_ShotgunAmmo_C"},
                                        {"BP_ShotgunAmmo_Item_C", "/Game/DI2/Items/RangedWeapons/Ammo/ShotgunRounds/BP_ShotgunAmmo_Item.BP_ShotgunAmmo_Item_C"}
                                    }
                                }
                            },
                            {
                                {"BP_InteractionState_AmmoCheck_C", "/Game/DI2/Items/RangedWeapons/Ammo/BP_InteractionState_AmmoCheck.BP_InteractionState_AmmoCheck_C"}
                            }
                        },
                        {"CrossBow",
                            {
                            },
                            {
                                {"BPC_PostProcess_Reticle_C", "/Game/DIShared/Effects/Blueprints/BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C"},
                                {"BP_RangedWeaponVisuals_Crossbow_C", "/Game/DI2/Items/RangedWeapons/Crossbow/BP_RangedWeaponVisuals_Crossbow.BP_RangedWeaponVisuals_Crossbow_C"}
                            }
                        },
                        {"Handgun",
                            {
                                {"HeavyRevolver",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_HeavyRevolver_C", "/Game/DI2/Items/RangedWeapons/Handgun/HeavyRevolver/BP_RangedWeaponVisuals_HeavyRevolver.BP_RangedWeaponVisuals_HeavyRevolver_C"}
                                    }
                                },
                                {"MachinePistol",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_MachinePistol_C", "/Game/DI2/Items/RangedWeapons/Handgun/MachinePistol/BP_RangedWeaponVisuals_MachinePistol.BP_RangedWeaponVisuals_MachinePistol_C"}
                                    }
                                },
                                {"Nailgun",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_Nailgun_C", "/Game/DI2/Items/RangedWeapons/Handgun/Nailgun/BP_RangedWeaponVisuals_Nailgun.BP_RangedWeaponVisuals_Nailgun_C"}
                                    }
                                },
                                {"Pistol",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_Pistol_C", "/Game/DI2/Items/RangedWeapons/Handgun/Pistol/BP_RangedWeaponVisuals_Pistol.BP_RangedWeaponVisuals_Pistol_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Legendary",
                            {
                            },
                            {
                                {"BPC_PostProcess_Reticle_C", "/Game/DIShared/Effects/Blueprints/BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C"},
                                {"BP_Projectile_ImpactCannon_C", "/Game/DI2/Items/RangedWeapons/Legendary/BP_Projectile_ImpactCannon.BP_Projectile_ImpactCannon_C"},
                                {"BP_Projectile_Legendary_SawbladeProjectile_C", "/Game/DI2/Items/RangedWeapons/Legendary/BP_Projectile_Legendary_SawbladeProjectile.BP_Projectile_Legendary_SawbladeProjectile_C"},
                                {"BP_RangedWeaponVisuals_LegendarySawblade_C", "/Game/DI2/Items/RangedWeapons/Legendary/BP_RangedWeaponVisuals_LegendarySawblade.BP_RangedWeaponVisuals_LegendarySawblade_C"}
                            }
                        },
                        {"Rifles",
                            {
                                {"AutoCarbine",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_AutoCarbine_C", "/Game/DI2/Items/RangedWeapons/Rifles/AutoCarbine/BP_RangedWeaponVisuals_AutoCarbine.BP_RangedWeaponVisuals_AutoCarbine_C"},
                                        {"BP_RangedWeaponVisuals_LegendaryBodyCount_C", "/Game/DI2/Items/RangedWeapons/Rifles/AutoCarbine/BP_RangedWeaponVisuals_LegendaryBodyCount.BP_RangedWeaponVisuals_LegendaryBodyCount_C"}
                                    }
                                },
                                {"Carbine",
                                    {
                                    },
                                    {
                                        {"BPC_PostProcess_Reticle_C", "/Game/DIShared/Effects/Blueprints/BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C"},
                                        {"BP_RangedWeaponVisuals_Carbine_C", "/Game/DI2/Items/RangedWeapons/Rifles/Carbine/BP_RangedWeaponVisuals_Carbine.BP_RangedWeaponVisuals_Carbine_C"}
                                    }
                                },
                                {"HuntingRifle",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_HuntingRifle_C", "/Game/DI2/Items/RangedWeapons/Rifles/HuntingRifle/BP_RangedWeaponVisuals_HuntingRifle.BP_RangedWeaponVisuals_HuntingRifle_C"}
                                    }
                                },
                                {"SportingRifle",
                                    {
                                    },
                                    {
                                        {"BPC_PostProcess_Reticle_C", "/Game/DIShared/Effects/Blueprints/BPC_PostProcess_Reticle.BPC_PostProcess_Reticle_C"},
                                        {"BP_RangedWeaponVisuals_SportingRifle_C", "/Game/DI2/Items/RangedWeapons/Rifles/SportingRifle/BP_RangedWeaponVisuals_SportingRifle.BP_RangedWeaponVisuals_SportingRifle_C"}
                                    }
                                }
                            },
                            {
                            }
                        },
                        {"Shotgun",
                            {
                                {"ShortShotgun",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_ShortShotgun_C", "/Game/DI2/Items/RangedWeapons/Shotgun/ShortShotgun/BP_RangedWeaponVisuals_ShortShotgun.BP_RangedWeaponVisuals_ShortShotgun_C"}
                                    }
                                },
                                {"ShotGun",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_Shotgun_C", "/Game/DI2/Items/RangedWeapons/Shotgun/Shotgun/BP_RangedWeaponVisuals_Shotgun.BP_RangedWeaponVisuals_Shotgun_C"}
                                    }
                                },
                                {"TacticalShotgun",
                                    {
                                    },
                                    {
                                        {"BP_RangedWeaponVisuals_TacticalShotgun_C", "/Game/DI2/Items/RangedWeapons/Shotgun/TacticalShotgun/BP_RangedWeaponVisuals_TacticalShotgun.BP_RangedWeaponVisuals_TacticalShotgun_C"}
                                    }
                                }
                            },
                            {
                            }
                        }
                    },
                    {
                    }
                },
                {"ThrowableWeapons",
                    {
                        {"AcidBomb",
                            {
                            },
                            {
                                {"BP_Projectile_PipeBomb_Acid_C", "/Game/DI2/Items/ThrowableWeapons/AcidBomb/BP_Projectile_PipeBomb_Acid.BP_Projectile_PipeBomb_Acid_C"},
                                {"BP_ThrowingWeaponVisuals_AcidBomb_C", "/Game/DI2/Items/ThrowableWeapons/AcidBomb/BP_ThrowingWeaponVisuals_AcidBomb.BP_ThrowingWeaponVisuals_AcidBomb_C"}
                            }
                        },
                        {"BaitBomb",
                            {
                            },
                            {
                                {"BP_ProjectileCollisionResponse_ChangeMesh_C", "/Game/DI2/BalancingData/Weapons/Throwable/MeatBait/BP_ProjectileCollisionResponse_ChangeMesh.BP_ProjectileCollisionResponse_ChangeMesh_C"},
                                {"BP_Projectile_BaitBomb_C", "/Game/DI2/Items/ThrowableWeapons/BaitBomb/BP_Projectile_BaitBomb.BP_Projectile_BaitBomb_C"},
                                {"BP_ThrowingWeaponVisuals_BaitBomb_C", "/Game/DI2/Items/ThrowableWeapons/BaitBomb/BP_ThrowingWeaponVisuals_BaitBomb.BP_ThrowingWeaponVisuals_BaitBomb_C"}
                            }
                        },
                        {"ChemBomb",
                            {
                            },
                            {
                                {"BP_Projectile_ChemBomb_C", "/Game/DI2/Items/ThrowableWeapons/ChemBomb/BP_Projectile_ChemBomb.BP_Projectile_ChemBomb_C"},
                                {"BP_ThrowingWeaponVisuals_ChemBomb_C", "/Game/DI2/Items/ThrowableWeapons/ChemBomb/BP_ThrowingWeaponVisuals_ChemBomb.BP_ThrowingWeaponVisuals_ChemBomb_C"}
                            }
                        },
                        {"ElectricBomb",
                            {
                            },
                            {
                                {"BP_AOE_StatusEffect_ArcFromSource_C", "/Game/DI2/StatusEffects/DamageOverTime/Electrocute/BP_AOE_StatusEffect_ArcFromSource.BP_AOE_StatusEffect_ArcFromSource_C"},
                                {"BP_Projectile_PipeBomb_Electric_C", "/Game/DI2/Items/ThrowableWeapons/ElectricBomb/BP_Projectile_PipeBomb_Electric.BP_Projectile_PipeBomb_Electric_C"},
                                {"BP_ThrowingWeaponVisuals_ElectricBomb_C", "/Game/DI2/Items/ThrowableWeapons/ElectricBomb/BP_ThrowingWeaponVisuals_ElectricBomb.BP_ThrowingWeaponVisuals_ElectricBomb_C"}
                            }
                        },
                        {"ElectricStar",
                            {
                            },
                            {
                                {"BPC_StateTransmitter_C", "/Game/DI2/Core/Gameplay/EnvHazards/BPC_StateTransmitter.BPC_StateTransmitter_C"},
                                {"BP_ProjectileCollisionResponse_ElectricStar_C", "/Game/DI2/BalancingData/Weapons/Throwable/ElectricStar/BP_ProjectileCollisionResponse_ElectricStar.BP_ProjectileCollisionResponse_ElectricStar_C"},
                                {"BP_Projectile_ElectricStar_C", "/Game/DI2/Items/ThrowableWeapons/ElectricStar/BP_Projectile_ElectricStar.BP_Projectile_ElectricStar_C"},
                                {"BP_ThrowingWeaponVisuals_ElectricStar_C", "/Game/DI2/Items/ThrowableWeapons/ElectricStar/BP_ThrowingWeaponVisuals_ElectricStar.BP_ThrowingWeaponVisuals_ElectricStar_C"}
                            }
                        },
                        {"Flashbang",
                            {
                            },
                            {
                                {"BP_Projectile_Flashbang_C", "/Game/DI2/Items/ThrowableWeapons/Flashbang/BP_Projectile_Flashbang.BP_Projectile_Flashbang_C"},
                                {"BP_ThrowingWeaponVisuals_Flashbang_C", "/Game/DI2/Items/ThrowableWeapons/Flashbang/BP_ThrowingWeaponVisuals_Flashbang.BP_ThrowingWeaponVisuals_Flashbang_C"}
                            }
                        },
                        {"MeatBait",
                            {
                            },
                            {
                                {"BPC_Distraction_GroupCoordinator_C", "/Game/DI2/Enemies/BPC_Distraction_GroupCoordinator.BPC_Distraction_GroupCoordinator_C"},
                                {"BP_Meatbait_C", "/Game/DI2/Items/ThrowableWeapons/MeatBait/BP_Meatbait.BP_Meatbait_C"},
                                {"BP_ProjectileCollisionResponse_ChangeMesh_C", "/Game/DI2/BalancingData/Weapons/Throwable/MeatBait/BP_ProjectileCollisionResponse_ChangeMesh.BP_ProjectileCollisionResponse_ChangeMesh_C"},
                                {"BP_Projectile_MeatBait_C", "/Game/DI2/Items/ThrowableWeapons/MeatBait/BP_Projectile_MeatBait.BP_Projectile_MeatBait_C"},
                                {"BP_ThrowingWeaponVisuals_MeatBait_C", "/Game/DI2/Items/ThrowableWeapons/MeatBait/BP_ThrowingWeaponVisuals_MeatBait.BP_ThrowingWeaponVisuals_MeatBait_C"}
                            }
                        },
                        {"MilitaryGrenade",
                            {
                            },
                            {
                                {"BP_Projectile_MilitaryGrenade_C", "/Game/DI2/Items/ThrowableWeapons/MilitaryGrenade/BP_Projectile_MilitaryGrenade.BP_Projectile_MilitaryGrenade_C"},
                                {"BP_ThrowingWeaponVisuals_MilitaryGrenade_C", "/Game/DI2/Items/ThrowableWeapons/MilitaryGrenade/BP_ThrowingWeaponVisuals_MilitaryGrenade.BP_ThrowingWeaponVisuals_MilitaryGrenade_C"}
                            }
                        },
                        {"MolotovCocktail",
                            {
                            },
                            {
                                {"BP_MolotovCocktail_Projectile_C", "/Game/DI2/Items/ThrowableWeapons/MolotovCocktail/BP_MolotovCocktail_Projectile.BP_MolotovCocktail_Projectile_C"},
                                {"BP_ThrowingWeaponVisuals_MolotovCocktail_C", "/Game/DI2/Items/ThrowableWeapons/MolotovCocktail/BP_ThrowingWeaponVisuals_MolotovCocktail.BP_ThrowingWeaponVisuals_MolotovCocktail_C"}
                            }
                        },
                        {"NailBomb",
                            {
                            },
                            {
                                {"BP_Projectile_NailBomb_C", "/Game/DI2/Items/ThrowableWeapons/NailBomb/BP_Projectile_NailBomb.BP_Projectile_NailBomb_C"},
                                {"BP_ThrowingWeaponVisuals_NailBomb_C", "/Game/DI2/Items/ThrowableWeapons/NailBomb/BP_ThrowingWeaponVisuals_NailBomb.BP_ThrowingWeaponVisuals_NailBomb_C"}
                            }
                        },
                        {"PipeBomb",
                            {
                            },
                            {
                                {"BP_Projectile_PipeBomb_C", "/Game/DI2/Items/ThrowableWeapons/PipeBomb/BP_Projectile_PipeBomb.BP_Projectile_PipeBomb_C"},
                                {"BP_ThrowingWeaponVisuals_PipeBomb_C", "/Game/DI2/Items/ThrowableWeapons/PipeBomb/BP_ThrowingWeaponVisuals_PipeBomb.BP_ThrowingWeaponVisuals_PipeBomb_C"}
                            }
                        },
                        {"Shuriken",
                            {
                            },
                            {
                                {"BP_Projectile_Shuriken_C", "/Game/DI2/Items/ThrowableWeapons/Shuriken/BP_Projectile_Shuriken.BP_Projectile_Shuriken_C"},
                                {"BP_ThrowingWeaponVisuals_Shuriken_C", "/Game/DI2/Items/ThrowableWeapons/Shuriken/BP_ThrowingWeaponVisuals_Shuriken.BP_ThrowingWeaponVisuals_Shuriken_C"}
                            }
                        },
                        {"StickyBomb",
                            {
                            },
                            {
                                {"BP_Item_StickyBomb_C", "/Game/DI2/Items/ThrowableWeapons/StickyBomb/BP_Item_StickyBomb.BP_Item_StickyBomb_C"},
                                {"BP_Projectile_PipeBomb_Sticky_C", "/Game/DI2/Items/ThrowableWeapons/StickyBomb/BP_Projectile_PipeBomb_Sticky.BP_Projectile_PipeBomb_Sticky_C"},
                                {"BP_ThrowingWeaponVisuals_StickyBomb_C", "/Game/DI2/Items/ThrowableWeapons/StickyBomb/BP_ThrowingWeaponVisuals_StickyBomb.BP_ThrowingWeaponVisuals_StickyBomb_C"}
                            }
                        }
                    },
                    {
                        {"BPC_WeaponAttachmentComponent_C", "/Game/DI2/Core/Weapons/BPC_WeaponAttachmentComponent.BPC_WeaponAttachmentComponent_C"},
                        {"BP_Base_Projectile_Sticky_C", "/Game/DI2/Items/ThrowableWeapons/BP_Base_Projectile_Sticky.BP_Base_Projectile_Sticky_C"},
                        {"BP_Base_ThrowingWeapon_C", "/Game/DI2/Items/ThrowableWeapons/BP_Base_ThrowingWeapon.BP_Base_ThrowingWeapon_C"}
                    }
                }
            },
            {
            }
        }
    },
    {
    }
};
