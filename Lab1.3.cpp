#include"pch.h"
#include<iostream>
#include<string>

using namespace std;

int main()
{
	int x, y = 4, z=0;
	cout << "Hi. Try to guess a number." << endl;
	do {
	
		cin >> x;

		cout << "" <<(z = 1 + z) << " try:" << x << endl;
		
		if (x > y) {
			cout << "Answer: No. Less" << endl;
		}
		else if (x < y) {
			cout << "Answer: No. Greater" << endl;
		}
		else {
			cout << "Answer: YES" << endl;
		}
		
		} while (x != y);
		
	system("PAUSE");
	return 0;
}