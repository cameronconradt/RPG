#pragma once
#include "Fighter.h"
class Robot :
	public Fighter
{
public:
	Robot(string n, int h, int st, int sp, int m);
	~Robot();
};

