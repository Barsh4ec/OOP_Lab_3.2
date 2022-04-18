#pragma once
#include "Student.h"
#include <string>
#include <sstream>
using namespace std;
class GraduateStudent : public Student
{
	string theme;
public:
	GraduateStudent();
	GraduateStudent(string, string, int, int);
	GraduateStudent(string, string);
	GraduateStudent(int, int);
	~GraduateStudent();

	string getTheme() { return theme; }
	void setTheme(string value) { theme = value; }

	friend ostream& operator << (ostream&, GraduateStudent&);
	friend istream& operator >> (istream&, GraduateStudent&);
	operator string();

	GraduateStudent ChangeTheme(GraduateStudent&);
	GraduateStudent ChangeID(GraduateStudent&);
};

