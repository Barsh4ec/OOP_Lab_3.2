#include "Student.h"
#include <string>
#include <sstream>
#include <iostream>
#include <windows.h>
using namespace std;

Student::Student()
{
	setName("");
	setCourse(0);
	setID(0);
}
Student::Student(string Name, int Course, int id)
{
	setName(Name);
	if (Course > 0 && Course <= 5)
		setCourse(Course);
	else
		cerr << "�� ����� ����� �����!" << endl;
	setID(id);
}
Student::Student(string Name)
{
	setName(Name);
}
Student::Student(int Course, int id)
{
	if (Course > 0 && Course <= 5)
		setCourse(Course);
	else
		cerr << "�� ����� ����� �����!" << endl;
	setID(id);
}
Student::Student(const Student& s)
{
	setName(s.name);
	setCourse(s.course);
	setID(s.ID);
}
Student::~Student()
{
	name, course, ID;
}

ostream& operator << (ostream& out, Student& s)
{
	out << (string)s;
	return out;
}
Student::operator string () 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream ss;
	ss << "�������: " << getName() << endl;
	ss << "��������� �� " << getCourse() << " ����" << endl;
	ss << "���������������� �����: " << getID() << endl;
	return ss.str();
}
istream& operator >> (istream& in, Student& s)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	string a;
	cout << "��'� ��������: "; cin >> a;
	do {
		cout << "���� ��������: "; cin >> x;
	} while (x < 0 || x >= 5);
	cout << "���������������� ����� ��������: "; cin >> y;
	cout << endl;
	s.setName(a);
	s.setCourse(x);
	s.setID(y);
	return in;
}