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
//////////////elvis edit////////////////
/*wszystko jest dobrze w tym programie
ale w zadaniu było napisane "(...)Następnie stwórz swoją własną funkcję, która otrzymuje ciąg znaków (imię)(...)"
a twoja funkcja nie otrzymuje nic (linia 19) tylko sama nadaje i potem wyświetla ciąg znaków*/
