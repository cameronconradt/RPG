#include "Fighter.h"


Fighter::Fighter(string n, int h, int st, int sp, int m)
{
	name = n;
	max_hitpoints = h;
	hitpoints = h;
	strength = st;
	speed = sp;
	magic = m;
}

string Fighter::getName()
{
	return name;
}

int Fighter::getMaximumHP()
{
	return max_hitpoints;
}

int Fighter::getCurrentHP()
{
	return hitpoints;
}

int Fighter::getStrength()
{
	return strength;
}

int Fighter::getSpeed()
{
	return speed;
}

int Fighter::getMagic()
{
	return magic;
}

void Fighter::regenerate()
{
	int gained;
	gained = strength / 6;
	if (gained + hitpoints > max_hitpoints)
		hitpoints = max_hitpoints;
	else if (gained < 1)
		hitpoints++;
	else
		hitpoints += gained;
}

Fighter::~Fighter()
{
}

