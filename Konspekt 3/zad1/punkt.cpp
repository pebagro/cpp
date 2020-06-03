#include<iostream>
#include "punkt.h"
using namespace std;

//Konstruktory
punkt::punkt()
{
	this->x = 0;
	this->y = 0;
}
punkt::punkt(int x, int y)
{
	this->x = x;
	this->y = y;
}

int punkt::getX()
{
	// pobiera wartosc
	return x;
}
int punkt::getY()
{
	// pobiera wartosc
	return y;
}

//Set
void punkt::setX(int x)
{
	// ustawia wartosc danego parametru
	this->x = x;
}
void punkt::setY(int y)
{
	// ustawia wartosc danego parametru
	this->y = y;
}

// Przesuń 
void punkt::move(int q, int w)
{

	this->x = (x + q);
	this->y = y + w;
	cout << "\nMoved... \n";
}
void punkt::show()
{
	this->x = x; 
	this->y = y;
	cout << "\nAktualna pozycja - X:" << x << " Y: " << y << endl;
}

