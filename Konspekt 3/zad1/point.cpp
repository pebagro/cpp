#include "point.h"
#include<iostream>

//Konstruktory
point::point()
{
	this->x = 0;
	this->y = 0;
}
point::point(int x, int y)
{
	this->x = x;
	this->y = y;
}

//Get
int point::getX()
{
	// pobiera warto��
	return x;
}
int point::getY()
{
	// pobiera warto��
	return y;
}

//Set
void point::setX(int x)
{
	// ustawia warto�� danego parametru
	this->x = x;
}
void point::setY(int y)
{
	// ustawia warto�� danego parametru
	this->y = y;
}

// Przesuń + 
void point::move(int q, int w)
{
	
	this->x = (x + q); // 
	this->y = y + w;
	cout << "\nMoved... \n";
}
void point::show()
{
	this->x = x; // 
	this->y = y;
	cout << "\nAktualna pozycja - X:"<<x<<" Y: "<<y<<endl;
}

