#include"pch.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	char x;
	do {
		

	int a, b, c;

	cout << "Hello, my dear. What are the numbers?" << endl;
	cin >> a;
	cout << "Number 1: "<< a <<"" << endl;
	cin >> b;
	cout << "Number 2: " << b << "" << endl;

	cout << "What do you want to do?" << endl;
	    cout <<"1. +"<< '\n';
		cout <<"2. -"<< '\n';
		cout <<"3. *"<< '\n';
		cout <<"4. /"<< '\n';

		cin >> c;
						
			if (c == 1)		
			{
			cout << "Result = " << a + b << endl;
			}
			if (c == 2)		
			{
			cout << "Result = " << a - b << endl;
			}
			if (c == 3)		
			{
			cout << "Result = " << a * b << endl;
			}
			if (c == 4)		
			{
			cout << "Result = " << a / b << "." << a % b << endl;
			}
			cout << "Do you want to try again? y/n" << endl;		
			cin >> x;
			} while (x != 'n');
		
	system("PAUSE");
	return 0;


}