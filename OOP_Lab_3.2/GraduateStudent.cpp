#include "GraduateStudent.h"
#include <string>
#include <sstream>
#include <iostream>
#include <windows.h>
using namespace std;

GraduateStudent::GraduateStudent()
{
	setName("");
	setCourse(0);
	setID(0);
	setTheme("");
}
GraduateStudent::GraduateStudent(string Name, string Theme, int Course, int id)
{
	setName(Name);
	if (Course > 0 && Course <= 5)
		setCourse(Course);
	else
		cerr << "�� ����� ����� �����!" << endl;
	setID(id);
	setTheme(Theme);
}
GraduateStudent::GraduateStudent(string Name, string Theme)
{
	setName(Name);
	setTheme(Theme);
}
GraduateStudent::GraduateStudent(int Course, int id)
{
	if (Course > 0 && Course <= 5)
		setCourse(Course);
	else
		cerr << "�� ����� ����� �����!" << endl;
	setID(id);
}
GraduateStudent::~GraduateStudent()
{
	theme;
}

ostream& operator << (ostream& out, GraduateStudent& s)
{
	out << (string)s;
	return out;
}
GraduateStudent::operator string ()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream ss;
	ss << "�������: " << getName() << endl;
	ss << "��������� �� " << getCourse() << " ����" << endl;
	ss << "���������������� �����: " << getID() << endl;
	ss << "���� �������� ������: " << getTheme() << endl;
	return ss.str();
}
istream& operator >> (istream& in, GraduateStudent& s)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	string a, b;
	cout << "��'� ��������: "; cin >> a;
	do {
		cout << "���� ��������: "; cin >> x;
	} while (x < 0 || x >= 5);
	cout << "���������������� ����� ��������: "; cin >> y;
	cout << "���� �������� ������ ��������: "; cin >> b;
	cout << endl;
	s.setName(a);
	s.setCourse(x);
	s.setID(y);
	s.setTheme(b);
	return in;
}

GraduateStudent GraduateStudent::ChangeTheme(GraduateStudent& a)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string x;
	cout << "������ ����� ���� ���� ��� �������� ������: "; cin >> x;
	a.setTheme(x);
	return a;
}

GraduateStudent GraduateStudent::ChangeID(GraduateStudent& a)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "������ ��� ����� ���������������� �����: "; cin >> x;
	a.setID(x);
	return a;
}