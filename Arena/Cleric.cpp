#include "Cleric.h"


Cleric::Cleric(string n, int h, int st, int sp, int m) : Fighter(n, h, st, sp, m)
{
	mana = 5 * magic;
	maxmana = mana;
}


Cleric::~Cleric()
{
}
