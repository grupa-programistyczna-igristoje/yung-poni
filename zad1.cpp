// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	unsigned short int a;
	std::cout << "Podaj swoj wynik: ";
	std::cin >> a;
	if (a == 100)
	{
		std::cout << "Ryju, perfekcyjna szosteczka! ";
		return 0;
	}
	if (100 >= a&&a >= 90)
	{
		std::cout << "No ladna ta szosteczka jes ";
		return 0;
	}
	if (89 >= a&&a >= 80)
	{
		std::cout << "Elegancka piateczka ";
		return 0;
	}
	if (79 >= a&&a >= 70)
	{
		std::cout << "Czworeczka nie taka zla ";
		return 0;
	}
	if (69 >= a&&a >= 60)
	{
		std::cout << "ehh, 3 ";
		return 0;
	}
	if (59 >= a&&a >= 50)
	{
		std::cout << "co to ma byc ta 2 niby co ";
		return 0;
	}
	if (49 >= a)
	{
		std::cout << "brawo kiepie, pala ";
		return 0;
	}
	else
	{
		std::cout << "nwm co wpisales, ale nie to co trzeba ";
		return 0;
	}

	return 0;
}