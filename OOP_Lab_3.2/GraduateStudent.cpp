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
		cerr << "Не вірний номер курсу!" << endl;
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
		cerr << "Не вірний номер курсу!" << endl;
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
	ss << "Студент: " << getName() << endl;
	ss << "Навчається на " << getCourse() << " курсі" << endl;
	ss << "Ідентифікаційний номер: " << getID() << endl;
	ss << "Тема дипломної роботи: " << getTheme() << endl;
	return ss.str();
}
istream& operator >> (istream& in, GraduateStudent& s)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	string a, b;
	cout << "Ім'я студента: "; cin >> a;
	do {
		cout << "Курс студента: "; cin >> x;
	} while (x < 0 || x >= 5);
	cout << "Ідентифікаційний номер студента: "; cin >> y;
	cout << "Тема дипломної роботи студента: "; cin >> b;
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
	cout << "Введіть назву нової теми для дипломної роботи: "; cin >> x;
	a.setTheme(x);
	return a;
}

GraduateStudent GraduateStudent::ChangeID(GraduateStudent& a)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть ваш новий ідентифікаційний номер: "; cin >> x;
	a.setID(x);
	return a;
}