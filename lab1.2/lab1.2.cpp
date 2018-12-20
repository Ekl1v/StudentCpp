#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char name[255];
	int month, day, age;

	cout << "What's your name?" << endl;
	cin >> name;

	cout << "Enter your date of birth." << endl;
	cin >> day;

	cout << "Enter the month of your birth." << endl;
	cin >> month;

	cout << "What year are you born?" << endl;
	cin >> age;

		if ((day > 20)&&(month = 12)&&(age >= 2000))
		{
		int today = 2017;
		age = (today - age);
		}
		else
		{
		int today = 2018;
		age = (today - age);
		}

	cout << "Hello, " << name << " You're " << age << " years old." << endl;

	system("pause");
	return 0;

}

