#pragma once
#include <string>
#include <sstream>
using namespace std;
class Student
{
	string name;
	int course;
	int ID;
public:
	Student();
	Student(string, int, int);
	Student(string);
	Student(int, int);
	Student(const Student&);
	~Student();

	string getName() { return name; }
	int getCourse() { return course; }
	int getID() { return ID; }

	void setName(string value) { name = value; }
	void setCourse(int value) { course = value; }
	void setID(int value) { ID = value; }

	friend ostream& operator << (ostream&, Student&);
	friend istream& operator >> (istream&, Student&);
	operator string();
};

