#pragma once
#include "C:\Users\camer_000\Documents\Visual Studio 2013\lab7\Student_Code\StudentInterface.h"
class Student :
	public StudentInterface
{
public:
	Student();
	~Student();
	unsigned long long int getID();
	string getName();
	string getGPA();
	void addGPA(double classGrade);
	string toString();

};

