#include <vector>
#include <string>

#pragma once

struct Abilities
{
public:
	Abilities() {}
	Abilities(bool Floaty, bool TeamUp, bool Spellproof, bool Hidden, bool Multistrike, bool Charge, int Assassin, int Splash, int Armor)
	{
		this->Multistrike = Multistrike;
		this->Spellproof = Spellproof;
		this->Floaty = Floaty;
		this->TeamUp = TeamUp;
		this->Hidden = Hidden;
		this->Charge = Charge;

		this->Assassin = Assassin;
		this->Splash = Splash;
		this->Armor = Armor;
	}

	int size()
	{
		int abilities = 0;

		if (Multistrike)
			abilities++;

		if (Spellproof)
			abilities++;

		if (Floaty)
			abilities++;

		if (TeamUp)
			abilities++;

		if (Hidden)
			abilities++;

		if (Charge)
			abilities++;

		if (Assassin > 0)
			abilities++;

		if (Splash > 0)
			abilities++;

		if (Armor > 0)
			abilities++;

		return abilities;
	}

	std::string getString()
	{
		std::string abilities;

		if (Multistrike)
			abilities += "Multistrike\n";

		if (Spellproof)
			abilities += "Spellproof\n";

		if (Floaty)
			abilities += "Floaty\n";

		if (TeamUp)
			abilities += "TeamUp\n";

		if (Hidden)
			abilities += "Hidden\n";

		if (Charge)
			abilities += "Charge\n";

		if (Assassin > 0)
			abilities += "Assassin: " + std::to_string(Assassin) + "\n";

		if (Splash > 0)
			abilities += "Splash: " + std::to_string(Splash) + "\n";

		if (Armor > 0)
			abilities += "Armor: " + std::to_string(Armor) + "\n";

		return abilities;
	}

	bool Multistrike;
	bool Spellproof;
	bool Floaty;
	bool TeamUp;
	bool Hidden;
	bool Charge;

	int Assassin; 
	int Splash;
	int Armor;
private:
};