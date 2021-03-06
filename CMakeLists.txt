cmake_minimum_required(VERSION 3.7)
project(DivertProject)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

set(SOURCE_FILES main.cpp Armor.cpp Armor.h Blacksmith.cpp Blacksmith.h BuyableItems.cpp BuyableItems.h Dice.cpp Dice.h EnemyCharacter.cpp EnemyCharacter.h GameCharacter.cpp GameCharacter.h Interactive.cpp Interactive.h InteractiveCharacter.cpp InteractiveCharacter.h InteractiveItems.cpp InteractiveItems.h Inventory.cpp Inventory.h Magician.cpp Magician.h MeleeWeapon.cpp MeleeWeapon.h PlayableCharacter.cpp PlayableCharacter.h Potion.cpp Potion.h QuestAgent.cpp QuestAgent.h Race.cpp Race.h RangedWeapon.cpp RangedWeapon.h Vendor.cpp Vendor.h Weapon.cpp Weapon.h GameMap.cpp GameMap.h Tile.cpp Tile.h)
add_executable(Divert ${SOURCE_FILES})
add_library(core ${SOURCE_FILES})
target_link_libraries(Divert core)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(Divert ${SFML_LIBRARIES})
endif()