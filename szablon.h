#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>

class szablon
{
public:
	szablon(T1 a, T2 b) : variable1(a), variable2(b)
	{
	}

	~szablon()
	{
	}

	T1 variable1;
	T2 variable2;

	void wyswietl()
	{
		cout << "\n\t\n\tVariable1: " << variable1 << endl;
		cout << "\n\tVariable2: " << variable2 << endl;
	}
};
