#pragma once
#include "Fighter.h"
class Cleric :
	public Fighter
{
public:
	Cleric(string name, int hitpoints, int strength, int speed, int magic);
	~Cleric();
	int getDamage();
	void takeDamage(int damage);
	void regenerate();
	bool useAbility();
	void reset();

protected:
	int mana;
};

