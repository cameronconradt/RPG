#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <set>
#include <iomanip>
#include "FighterInterface.h"
#include "Factory.h"
#include "ArenaInterface.h"
#include "Arena.h"
#include "Fighter.h"
#include "Cleric.h"
#include "Robot.h"
#include "Archer.h"

using namespace std;

void addFighter(set<Fighter*>& Fighters, string input);
bool correct(string input);

int main()
{
	set<Fighter*> Fighters;
	string input;
	while (getline(cin, input))
	{
		addFighter(Fighters, input);
	}


}
//Adds Fighter to the vector
void addFighter(set<Fighter*>& Fighters, string input)
{
	stringstream ss;
	string name;
	string type;
	int hitpoints;
	int strength;
	int speed;
	int magic;
	if (correct(input))
	{
		int size;
		size = Fighters.size();
		ss << input;
		ss >> name;
		ss >> type;
		ss >> hitpoints;
		ss >> strength;
		ss >> speed;
		ss >> magic;
		if (type == "C")
		{
			Cleric* c = new Cleric(name, hitpoints, strength, speed, magic);
			Fighters.insert(c);
		}
/*		else if (type == "R")
		{
			Robot* r = new Robot(name, hitpoints, strength, speed, magic);
			Fighters.insert(r);
		}
		else
		{
			Archer* a = new Archer(name, hitpoints, strength, speed, magic);
			Fighters.insert(a);
		}
		*/
		if (size == Fighters.size())
		{
			cout << "Error";
		}
	}

}
//Determines if input is correct
bool correct(string input)
{
	stringstream ss;
	string name;
	string type;
	int hitpoints;
	int strength;
	int speed;
	int magic;
	ss << input;
	ss >> name;
	ss >> type;
	if (type == "C")
	{
		ss >> hitpoints;
		ss >> strength;
		ss >> speed;
		ss >> magic;
	}
	else if (type == "R")
	{
		ss >> hitpoints;
		ss >> strength;
		ss >> speed;
		ss >> magic;
	}
	else if (type == "A")
	{
		ss >> hitpoints;
		ss >> strength;
		ss >> speed;
		ss >> magic;
	}
	else
	{
		return false;
	}
	if ((hitpoints || strength || speed || magic) < 0)
		return false;
	return true;

}
