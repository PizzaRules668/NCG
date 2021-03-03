#include <vector>

#include "Card.h"
#include "Deck.h"

/*
info Template Creature
 Name: \n
 Rarity: \n
 Cost: \n
 Attack: \n
 Hp: \n
 Ablities: \n
*/

/*
info Template Creature
 Name: \n
 Rarity: \n
 Cost: \n
 Ablities: \n
*/

//							Rarity, Cost, Attack, Hp, Abilities, Floaty, TeamUp, Spellproof, Hidden, Multistrike, Charge, Assassin, Splash, Armor, Name, Image Path
Card Sizzle					(COMMON, 1, 1, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Sizzle", "images/Fire.png");
Card Blue_Sizzle			(COMMON, 2, 3, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Blue Sizzle", "images/Fire.png");
Card White_Sizzle			(COMMON, 3, 3, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "White Sizzle", "images/Fire.png");
Card Burn_Bit				(COMMON, 1, 1, 1, Abilities(false, true, false, false, false, false, 0, 0, 0), "Burn Bit", "images/Fire.png");
Card Magma_Blob				(COMMON, 5, 6, 6, Abilities(false, false, false, false, false, false, 0, 0, 0), "Magma Blob", "images/Fire.png");
Card Baby_Phoenix			(COMMON, 2, 3, 1, Abilities(true, false, false, false, false, false, 0, 0, 0), "Baby Phoenix", "images/Fire.png");
Card Fire_Ant				(COMMON, 2, 2, 2, Abilities(false, false, false, true, false, false, 0, 0, 0), "Fire Ant", "images/Fire.png");
Card Deto_Nate				(COMMON, 3, 3, 1, Abilities(false, false, false, false, false, false, 4, 0, 0), "Deto Nate", "images/Fire.png");
Card Sumo_Sizzle			(RARE, 3, 2, 2, Abilities(true, false, false, false, false, false, 0, 0, 0), "Sumo Sizzle", "images/Fire.png");
Card Sizzling_Coffee		(RARE, 4, 2, 2, Abilities(false, false, false, false, false, false, 2, 0, 0), "Sizzling Coffee", "images/Fire.png");
Card Burner_Bandit			(RARE, 3, 2, 2, Abilities(true, false, true, false, false, false, 2, 0, 0), "Burner Bandit", "images/Fire.png");
Card Killer_Mosquito		(RARE, 4, 2, 4, Abilities(true, false, false, true, false, false, 0, 0, 0), "Killer Mosquito", "images/Fire.png");
Card Dragon_Egg				(RARE, 3, 1, 1, Abilities(true, false, false, false, false, false, 0, 0, 0), "Dragon Egg", "images/Fire.png");
Card Soot_Snake				(WANTED, 5, 3, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Soot Snake", "images/Fire.png");
Card Phoenix				(WANTED, 6, 3, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Phoenix", "images/Fire.png");
Card Sizzlord				(WANTED, 3, 2, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Sizzlord", "images/Fire.png");
Card Fire_Wall				(WANTED, 1, 0, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Fire Wall", "images/Fire.png");
Card Momma_Sizzle			(LEDENDARY, 4, 0, 4, Abilities(false, false, false, false, false, false, 0, 0, 0), "Momma Sizzle", "images/Fire.png");
Card Guy_with_a_Flamethrower(LEDENDARY, 4, 0, 5, Abilities(false, false, false, false, false, false, 0, 0, 0), "Guy w/a Flamethrower", "images/Fire.png");

//				Rarity, Cost, Name,		Image Path
Card Hot_Sauce	(COMMON, 1, "Hot Sauce", "images/Fire.png");
Card Agility	(COMMON, 1, "Agility", "images/Fire.png");
Card Fire_it_Up	(COMMON, 3, "Fire it Up", "images/Fire.png");
Card Fiery_Fate	(RARE, 4, "Fiery Fate", "images/Fire.png");
Card Hot_Potato	(RARE, 3, "Hot Potato", "images/Fire.png");
Card Lava_Burst	(RARE, 5, "Lava Burst", "images/Fire.png");

extern Deck Fire(std::vector<Card*> {	&Sizzle, &Blue_Sizzle, &White_Sizzle, &Burn_Bit, &Magma_Blob, &Baby_Phoenix, &Fire_Ant, &Deto_Nate,
										&Sumo_Sizzle, &Sizzling_Coffee, &Burner_Bandit, &Killer_Mosquito, &Dragon_Egg, &Soot_Snake, &Phoenix, 
										&Sizzlord, &Fire_Wall, &Momma_Sizzle, &Guy_with_a_Flamethrower, &Hot_Sauce, &Agility, &Fire_it_Up, &Fiery_Fate,
										&Hot_Potato, &Lava_Burst }, "images/Fire.png");

//					Rarity, Cost, Attack, Hp, Abilities, Floaty, TeamUp, Spellproof, Hidden, Multistrike, Charge, Assassin, Splash, Armor, Name, Image Path
Card Elf			(COMMON, 1, 1, 1, Abilities(false, false, false, false, false, false, 0, 0, 0), "Elf", "images/Nature.png");
Card Hammer_Elf		(COMMON, 2, 5, 3, Abilities(false, false, false, false, false, true, 0, 0, 0), "Hammer Elf", "images/Nature.png");
Card Nature_Hog		(COMMON, 1, 0, 4, Abilities(false, false, false, false, false, false, 0, 0, 0), "Nature Hog", "images/Nature.png");
Card Corn_Dog		(COMMON, 1, 1, 1, Abilities(false, true, false, false, false, false, 0, 0, 0), "Corn Dog", "images/Nature.png");
Card Buck			(COMMON, 5, 4, 4, Abilities(false, false, false, false, false, false, 0, 0, 0), "Buck", "images/Nature.png");
Card Pea_Launcher	(COMMON, 2, 2, 2, Abilities(false, true, false, false, false, false, 0, 0, 0), "Pea Launcher", "images/Nature.png");
Card Broctopus		(COMMON, 3, 4, 2, Abilities(false, true, false, false, false, false, 0, 0, 0), "Broctopus", "images/Nature.png");
Card Vine_Monkey	(COMMON, 3, 0, 3, Abilities(true, false, false, false, false, false, 0, 0, 0), "Vine Monkey", "images/Nature.png");
Card Big_Pig		(RARE, 2, 0, 6, Abilities(false, true, false, false, false, false, 0, 0, 0), "Big_Pig", "images/Nature.png");
Card Road_Hog		(RARE, 3, 0, 6, Abilities(true, true, true, false, false, false, 0, 0, 0), "Road Hog", "images/Nature.png");
Card Beary			(RARE, 3, 3, 2, Abilities(false, false, false, false, false, false, 0, 0, 0), "Beary", "images/Nature.png");
Card Stalia			(RARE, 3, 3, 2, Abilities(false, true, false, false, false, false, 0, 0, 0), "Stalia", "images/Nature.png");
Card Small_Sapling	(RARE, 3, 1, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Small Sapling", "images/Nature.png");
Card Healer_Elf		(WANTED, 3, 1, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Healer Elf", "images/Nature.png");
Card Elf_Commando	(WANTED, 7, 10, 6, Abilities(false, false, false, false, false, true, 0, 0, 0), "Elf Commando", "images/Nature.png");
Card Hogmaster		(WANTED, 6, 4, 3, Abilities(false, false, false, false, false, false, 0, 0, 0), "Hogmaster", "images/Nature.png");
Card Golden_Goose	(WANTED, 1, 1, 3, Abilities(true, false, false, false, false, false, 0, 0, 0), "Golden Goose", "images/Nature.png");
Card Nature_Guardian(LEDENDARY, 7, 2, 7, Abilities(true, false, false, false, false, false, 0, 2, 1), "Nature Guardian", "images/Nature.png");
Card Lemon_Aid		(LEDENDARY, 4, 1, 3, Abilities(false, false, false, false, false, false, 0, 0, 1), "Lemon Aid", "images/Nature.png");

//					Rarity, Cost, Name,			Image Path
Card Grass_Blades	(COMMON, 1, "Grass Blades", "images/Nature.png");
Card Embiggen		(COMMON, 2, "Embiggen", "images/Nature.png");
Card Heal			(COMMON, 2, "Heal", "images/Nature.png");
Card Flower_Power	(RARE, 4, "Flower Power", "images/Nature.png");
Card Root_Growth	(RARE, 3, "Root Growth", "images/Nature.png");
Card Death_by_Tree	(RARE, 4, "Death by Tree", "images/Nature.png");

extern Deck Nature(std::vector<Card*> { &Elf, &Hammer_Elf, &Nature_Hog, &Corn_Dog, &Buck, &Pea_Launcher, &Broctopus, &Vine_Monkey,
										&Big_Pig, &Road_Hog, &Beary, &Stalia, &Small_Sapling, &Healer_Elf, &Elf_Commando, &Hogmaster, 
										&Golden_Goose, &Nature_Guardian, &Lemon_Aid, &Grass_Blades, &Embiggen, &Heal, &Flower_Power, 
										&Root_Growth, &Death_by_Tree}, "images/Nature.png");

void setupCards()
{
}
