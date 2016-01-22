#pragma once
#include "C:\Users\camer_000\Documents\Visual Studio 2013\lab7\Student_Code\GPAInterface.h"
class GPA :
	public GPAInterface
{
public:
	GPA();
	~GPA();
	map<unsigned long long int, StudentInterface*> getMap();
	set<StudentInterface*, Comparator> getSet();
	bool importStudents(string mapFileName, string setFileName);
	bool importGrades(string fileName);
	string querySet(string fileName);
	string queryMap(string fileName);
	void clear();

};

