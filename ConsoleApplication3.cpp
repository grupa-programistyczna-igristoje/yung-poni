// na pewno nie jest pi�kne ale dzia�a wi�c dla mnie tam git nie
// nie chcia�em tego wrzuca� na githaba bo w sumie po co ale ka�dy co� wrzuci� to nie bd   p r z e c i � t n y

#include "stdafx.h"
#include "cstdlib"
#include <iostream>


double delta(double a, double b, double c)
{
	double x = b*b - 4*(a*c);
	return x;
}

int main()

{
	double d, e, f, y;
	std::cout << "Podaj wartosc wspolczynnika a: ";
	std::cin >> d;

	if (d == 0)
	{
		std::cout << "pojebalo cie chyba ze a 0 wynosi kiepie malinowy. ";
		system("pause");
		return 1;
	}
	std::cout << "Teraz podaj b ryju: ";
	std::cin >> e;
	if (e == 0)
	{
		std::cout << "pojebalo cie chyba ze b 0 wynosi pecie buraczany. ";
		system("pause");
		return 1;
		
	}
	std::cout << "i dawaj c elegancko mordziata: ";
	std::cin >> f;
	if (f == 0)
	{
		std::cout << "pojebalo cie chyba ze c 0 wynosi smieciu kartoflany. ";
		system("pause");
		return 1;
		
	}
	y = delta(d, e, f);
	std::cout << "delta mordziato ty moja to jes: ";
	std::cout << y;
	std::cout << "\n";
	std::cin.get();
	system("pause");
	return 0;
	std::cin.get();
}



