// SwitchStatement 270918.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int x = 0;
	cout << "This film is only for people over 12 and under 15. " << endl;
	cout << "How old are you? " << endl;
	cin >> x;
	
	switch (x) {
	case 12:
		cout << "Come on in." << endl;
		break;
	case 13:
		cout << "Welcome." << endl;
		break;
	case 14:
		cout << "Awesome. Enjoy the film." << endl;
		break;
	case 15:
		cout << "Please make your way inside." << endl;
		break;
	default:
		cout << x << " is not an acceptable age. Sorry" << endl;
	}

	getchar();
	return 0;
		}
	
	



