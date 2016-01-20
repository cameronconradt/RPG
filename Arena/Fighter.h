#pragma once
#include "FighterInterface.h"
class Fighter :
	public FighterInterface
{
public:
	Fighter(string n, int h, int st, int sp, int m);
	~Fighter();
	string getName();
	int getMaximumHP();
	int getCurrentHP();
	int getStrength();
	int getSpeed();
	int getMagic();
	virtual void regenerate();
protected:
	string name;
	int max_hitpoints;
	int hitpoints;
	int strength;
	int speed;
	int magic;

};

