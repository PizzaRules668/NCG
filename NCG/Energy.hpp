#pragma once

class Energy
{
public:
	void nextRound(int round)
	{
		if (round != 12)
			energy = lastEnergy + 1;

		else if (round == 12)
			energy = 1;
	}

	int getEnergy(int bonus)
	{
		this->lastEnergy = energy;
		return this->energy + bonus;
	}

private:
	int lastEnergy = 0;
	int energy = 0;
};
