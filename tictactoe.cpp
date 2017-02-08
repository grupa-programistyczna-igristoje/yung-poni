// MIFCIO GITHUB
// Igristoje 2017 elo
// wiem ¿e system ceeles ale jakoœ mnie to jebie. ka³t sin

#include "stdafx.h"
#include<iostream>

using namespace std;
char board[10] = { 'o','1','2','3','4','5','6','7','8','9' }, znak ;
void drawBoard();
void zasadyGry();
int checkWin();
int wybor, win, playa=1,x ;
int graSingle();

int main()
{
	cout << "\nK O L K O   I   K R Z Y Z Y K\n"<<endl;
	cout << "Wybierz ilosc graczy: ";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "NIEGOTOWE" << endl;;
		break;
	case 2:
		graSingle();
		break;
		

	}

}
int graSingle()
{
	do {
		playa = (playa % 2) ? 1 : 2;
		drawBoard();
		cout << "Teraz kolej gracza "<<playa<<": ";
		cin >> wybor;
		znak = (playa == 1) ? 'X' : 'O';
		zasadyGry();
		checkWin();
		playa++;
	} while(win==0);
	drawBoard();
	if (win == 1)
	{
		cout << endl << "Brawo, wygral gracz "<<--playa<<"!"<< endl;
	}
	if (win == 2)
	{
		cout << "Gra skonczyla sie remisem. "<<endl;
	}
	return 0;
}
void drawBoard()
{
	system("cls");
	cout << "\nK O L K O   I   K R Z Y Z Y K\n";

	cout << "\nGracz 1 - Krzyzyk (X)  -  Gracz 2 - Kolko (O) " << endl << endl;
	cout << " _______________________" << endl;
	cout << "|       |       |       |" << endl;
	cout <<"|   "<< board[1]<<"   |   " << board[2] <<"   |   "<< board[3] <<"   |"<< endl;
	cout << "|_______|_______|_______|" << endl;
	cout << "|       |       |       |" << endl;
	cout << "|   " << board[4] << "   |   " << board[5] << "   |   " << board[6] << "   |" << endl;
	cout << "|_______|_______|_______|" << endl;
	cout << "|       |       |       |" << endl;
	cout << "|   " << board[7] << "   |   " << board[8] << "   |   " << board[9] << "   |" << endl;
	cout << "|_______|_______|_______|" << endl << endl;

	
}
void zasadyGry()
{
	if (wybor == 1 && board[1] == '1')
		board[1] = znak;
	else if (wybor == 2 && board[2] == '2')
		board[2] = znak;
	else if (wybor == 3 && board[3] == '3')
		board[3] = znak;
	else if (wybor == 5 && board[5] == '5')
		board[5] = znak;
	else if (wybor == 6 && board[6] == '6')
		board[6] = znak;
	else if (wybor == 7 && board[7] == '7')
		board[7] = znak;
	else if (wybor == 8 && board[8] == '8')
		board[8] = znak;
	else if (wybor == 9 && board[9] == '9')
		board[9] = znak;
	else if (wybor == 4 && board[4] == '4')
		board[4] = znak;
	else {
		cout << "Nieprawidlowy ruch. Tracisz kolejke.";
		cin.ignore();
		cin.get();
	}
}
	
int checkWin()
{
	if (board[1] == znak&&board[2] == znak&&board[3] == znak)
	{
		win = 1;
	}
	if (board[4] == znak&&board[5] == znak&&board[6] == znak)
	{
		win = 1;
	}
	if (board[7] == znak&&board[8] == znak&&board[9] == znak)
	{
		win = 1;
	}
	if (board[1] == znak&&board[4] == znak&&board[7] == znak)
	{
		win = 1;
	}
	if (board[2] == znak&&board[5] == znak&&board[8] == znak)
	{
		win = 1;
	}
	if (board[3] == znak&&board[6] == znak&&board[9] == znak)
	{
		win = 1;
	}
	if (board[1] == znak&&board[5] == znak&&board[9] == znak)
	{
		win = 1;
	}
	if (board[3] == znak&&board[5] == znak&&board[7] == znak)
	{
		win = 1;
	}
	else if (board[1] != '1' && board[2] != '2' && board[3] != '3'
		&& board[4] != '4' && board[5] != '5' && board[6] != '6'
		&& board[7] != '7' && board[8] != '8' && board[9] != '9')
	{
		win = 2;
	}
	return 0;
}
	
