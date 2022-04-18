#include <iostream>
#include <Windows.h>
#include "GraduateStudent.h"

using namespace std;

int main() 
{
	Student a;
	cin >> a;
	cout << a << endl;
	GraduateStudent b;
	cin >> b;
	cout << b << endl;
	b.ChangeTheme(b);
	b.ChangeID(b);
	cout << b << endl;
	GraduateStudent c("Петро", "*Тема*", 4, 1235142);
	cout << c;
	return 0;
}