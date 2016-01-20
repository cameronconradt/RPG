#pragma once
#include "Fighter.h"
class Cleric :
	public Fighter
{
public:
	Cleric(string n, int h, int st, int sp, int m);
	~Cleric();
	int getDamage();
	void takeDamage(int damage);
	void regenerate();
	bool useAbility();
	void reset();

protected:
	int mana;
	int maxmana;
};

