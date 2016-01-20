#include "Cleric.h"


Cleric::Cleric(string n, int h, int st, int sp, int m) : Fighter(n, h, st, sp, m)
{
	mana = 5 * magic;
	maxmana = mana;
}

int Cleric::getDamage()
{
	return magic;
}

void Cleric::takeDamage(int damage)
{

}

void Cleric::regenerate()
{

}

bool Cleric::useAbility()
{
	if (mana >= CLERIC_ABILITY_COST)
	{
		int gained;
		gained = magic / 3;
		if (gained + hitpoints > max_hitpoints)
			hitpoints = max_hitpoints;
		else if (gained <= 1)
			hitpoints++;
		else
			hitpoints += gained;
		mana = mana - CLERIC_ABILITY_COST;
		return true;
	}
	return false;
}

void Cleric::reset()
{

}

Cleric::~Cleric()
{
}

