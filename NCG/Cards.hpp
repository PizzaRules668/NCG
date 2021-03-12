#include <vector>

#include "Card.h"
#include "Deck.h"

#pragma once

//									Rarity, Cost, Attack, Hp, Abilities, Floaty, TeamUp, Spellproof, Hidden, Multistrike, Charge, Assassin, Splash, Armor, Name, Image Path
extern Card Sizzle					(COMMON, 1, 1, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Sizzle", "assets/images/Fire.png");
extern Card Blue_Sizzle				(COMMON, 2, 3, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Blue Sizzle", "assets/images/Fire.png");
extern Card White_Sizzle			(COMMON, 3, 3, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "White Sizzle", "assets/images/Fire.png");
extern Card Burn_Bit				(COMMON, 1, 1, 1, Abilities(false, true, false, false, false, false, 0, 0, 0), "Burn Bit", "assets/images/Fire.png");
extern Card Magma_Blob				(COMMON, 5, 6, 6, Abilities(false, false, false, false, false, false, 0, 0, 0), "Magma Blob", "assets/images/Fire.png");
extern Card Baby_Phoenix			(COMMON, 2, 3, 1, Abilities(true, false, false, false, false, false, 0, 0, 0), "Baby Phoenix", "assets/images/Fire.png");
extern Card Fire_Ant				(COMMON, 2, 2, 2, Abilities(false, false, false, true, false, false, 0, 0, 0), "Fire Ant", "assets/images/Fire.png");
extern Card Deto_Nate				(COMMON, 3, 3, 1, Abilities(false, false, false, false, false, false, 4, 0, 0), "Deto Nate", "assets/images/Fire.png");
extern Card Sumo_Sizzle				(RARE, 3, 2, 2, Abilities(true, false, false, false, false, false, 0, 0, 0), "Sumo Sizzle", "assets/images/Fire.png");
extern Card Sizzling_Coffee			(RARE, 4, 2, 2, Abilities(false, false, false, false, false, false, 2, 0, 0), "Sizzling Coffee", "assets/images/Fire.png");
extern Card Burner_Bandit			(RARE, 3, 2, 2, Abilities(true, false, true, false, false, false, 2, 0, 0), "Burner Bandit", "assets/images/Fire.png");
extern Card Killer_Mosquito			(RARE, 4, 2, 4, Abilities(true, false, false, true, false, false, 0, 0, 0), "Killer Mosquito", "assets/images/Fire.png");
extern Card Dragon_Egg				(RARE, 3, 1, 1, Abilities(true, false, false, false, false, false, 0, 0, 0), "Dragon Egg", "assets/images/Fire.png");
extern Card Soot_Snake				(WANTED, 5, 3, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Soot Snake", "assets/images/Fire.png");
extern Card Phoenix					(WANTED, 6, 3, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Phoenix", "assets/images/Fire.png");
extern Card Sizzlord				(WANTED, 3, 2, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Sizzlord", "assets/images/Fire.png");
extern Card Fire_Wall				(WANTED, 1, 0, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Fire Wall", "assets/images/Fire.png");
extern Card Momma_Sizzle			(LEDENDARY, 4, 0, 4, Abilities(false, false, false, false, false, false, 0, 0, 0), "Momma Sizzle", "assets/images/Fire.png");
extern Card Guy_with_a_Flamethrower (LEDENDARY, 4, 0, 5, Abilities(false, false, false, false, false, false, 0, 0, 0), "Guy w/a Flamethrower", "assets/images/Fire.png");

//						Rarity, Cost, Name,		Image Path
extern Card Hot_Sauce	(COMMON, 1, "Hot Sauce", "assets/images/Fire.png");
extern Card Agility		(COMMON, 1, "Agility", "assets/images/Fire.png");
extern Card Fire_it_Up	(COMMON, 3, "Fire it Up", "assets/images/Fire.png");
extern Card Fiery_Fate	(RARE, 4, "Fiery Fate", "assets/images/Fire.png");
extern Card Hot_Potato	(RARE, 3, "Hot Potato", "assets/images/Fire.png");
extern Card Lava_Burst	(RARE, 5, "Lava Burst", "assets/images/Fire.png");

extern Deck Fire(std::vector<Card*> {	&Sizzle, &Blue_Sizzle, &White_Sizzle, &Burn_Bit, &Magma_Blob, &Baby_Phoenix, &Fire_Ant, &Deto_Nate,
										&Sumo_Sizzle, &Sizzling_Coffee, &Burner_Bandit, &Killer_Mosquito, &Dragon_Egg, &Soot_Snake, &Phoenix, 
										&Sizzlord, &Fire_Wall, &Momma_Sizzle, &Guy_with_a_Flamethrower, &Hot_Sauce, &Agility, &Fire_it_Up, &Fiery_Fate,
										&Hot_Potato, &Lava_Burst }, "assets/images/Fire.png");

//					Rarity, Cost, Attack, Hp, Abilities, Floaty, TeamUp, Spellproof, Hidden, Multistrike, Charge, Assassin, Splash, Armor, Name, Image Path
Card Elf			(COMMON, 1, 1, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Elf", "assets/images/Nature.png");
Card Hammer_Elf		(COMMON, 2, 5, 3, Abilities(false, false, false, false, false, true, 0, 0, 0), "Hammer Elf", "assets/images/Nature.png");
Card Nature_Hog		(COMMON, 1, 0, 4, Abilities(false, false, false, false, false, false, 0, 0, 0), "Nature Hog", "assets/images/Nature.png");
Card Corn_Dog		(COMMON, 1, 1, 1, Abilities(false, true, false, false, false, false, 0, 0, 0), "Corn Dog", "assets/images/Nature.png");
Card Buck			(COMMON, 5, 4, 4, Abilities(false, false, false, false, false, false, 0, 0, 0), "Buck", "assets/images/Nature.png");
Card Pea_Launcher	(COMMON, 2, 2, 2, Abilities(false, true, false, false, false, false, 0, 0, 0), "Pea Launcher", "assets/images/Nature.png");
Card Broctopus		(COMMON, 3, 4, 2, Abilities(false, true, false, false, false, false, 0, 0, 0), "Broctopus", "assets/images/Nature.png");
Card Vine_Monkey	(COMMON, 3, 0, 3, Abilities(true, false, false, false, false, false, 0, 0, 0), "Vine Monkey", "assets/images/Nature.png");
Card Big_Pig		(RARE, 2, 0, 6, Abilities(false, true, false, false, false, false, 0, 0, 0), "Big_Pig", "assets/images/Nature.png");
Card Road_Hog		(RARE, 3, 0, 6, Abilities(true, true, true, false, false, false, 0, 0, 0), "Road Hog", "assets/images/Nature.png");
Card Beary			(RARE, 3, 3, 2, Abilities(false, false, false, false, false, false, 0, 0, 0), "Beary", "assets/images/Nature.png");
Card Stalia			(RARE, 3, 3, 2, Abilities(false, true, false, false, false, false, 0, 0, 0), "Stalia", "assets/images/Nature.png");
Card Small_Sapling	(RARE, 3, 1, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Small Sapling", "assets/images/Nature.png");
Card Healer_Elf		(WANTED, 3, 1, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Healer Elf", "assets/images/Nature.png");
Card Elf_Commando	(WANTED, 7, 10, 6, Abilities(false, false, false, false, false, true, 0, 0, 0), "Elf Commando", "assets/images/Nature.png");
Card Hogmaster		(WANTED, 6, 4, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Hogmaster", "assets/images/Nature.png");
Card Golden_Goose	(WANTED, 1, 1, 3, Abilities(true, false, false, false, false, false, 0, 0, 0), "Golden Goose", "assets/images/Nature.png");
Card Nature_Guardian(LEDENDARY, 7, 2, 7, Abilities(true, false, false, false, false, false, 0, 2, 1), "Nature Guardian", "assets/images/Nature.png");
Card Lemon_Aid		(LEDENDARY, 4, 1, 3, Abilities(false, false, false, false, false, false, 0, 0, 1), "Lemon Aid", "assets/images/Nature.png");

//					Rarity, Cost, Name,			Image Path
Card Grass_Blades	(COMMON, 1, "Grass Blades", "assets/images/Nature.png");
Card Embiggen		(COMMON, 2, "Embiggen", "assets/images/Nature.png");
Card Heal			(COMMON, 2, "Heal", "assets/images/Nature.png");
Card Flower_Power	(RARE, 4, "Flower Power", "assets/images/Nature.png");
Card Root_Growth	(RARE, 3, "Root Growth", "assets/images/Nature.png");
Card Death_by_Tree	(RARE, 4, "Death by Tree", "assets/images/Nature.png");

extern Deck Nature(std::vector<Card*> { &Elf, &Hammer_Elf, &Nature_Hog, &Corn_Dog, &Buck, &Pea_Launcher, &Broctopus, &Vine_Monkey,
										&Big_Pig, &Road_Hog, &Beary, &Stalia, &Small_Sapling, &Healer_Elf, &Elf_Commando, &Hogmaster, 
										&Golden_Goose, &Nature_Guardian, &Lemon_Aid, &Grass_Blades, &Embiggen, &Heal, &Flower_Power, 
										&Root_Growth, &Death_by_Tree}, "assets/images/Nature.png");

extern Deck Water(std::vector<Card*> {}, "assets/images/Water.png");
extern Deck Spooky(std::vector<Card*> {}, "assets/images/Spooky.png");
extern Deck Royal(std::vector<Card*> {}, "assets/images/Royal.png");

void setupCards()
{
}
