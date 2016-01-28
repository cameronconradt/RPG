#include "GPA.h"


GPA::GPA()
{
	

}


GPA::~GPA()
{
}


map<unsigned long long int, StudentInterface*> GPA::getMap()
{

}

set<StudentInterface*, Comparator> GPA::getSet()
{
	
}

bool GPA::importStudents(string mapFileName, string setFileName)
{
	54
}

bool GPA::importGrades(string fileName)
{
	ifstream myfile(fileName);
	if (myfile.is_open())
	{
		string id;
		string Class;
		string grade;
		while (!myfile.eof())
		{
			getline(myfile, id);
			getline(myfile, Class);
			getline(myfile, grade);

		}


	}
	else
		return false;
}

string GPA::querySet(string filename)
{

}

string GPA::queryMap(string fileName)
{

}

void GPA::clear()
{

}