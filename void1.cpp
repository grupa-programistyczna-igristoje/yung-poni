// void1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void imie()
{
	string x;
	cin >> x;
	cout << "Witaj, " << x << "! ";
}

int main()
{
	cout << "Jak Ci na imie?\n";
	imie();
	return 0;
}
