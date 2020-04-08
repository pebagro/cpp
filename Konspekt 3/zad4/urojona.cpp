#include "urojona.h"
#include <iostream>
using namespace std;

urojona::urojona(float a, float b)
{
	this->re = a;
	this->im = b;
}

urojona urojona::dzielenie(urojona a)
{
	urojona wyn(this->re, this->im);
	if (a.re == 0 || a.im == 0) 
	{ cout << "Dzielenie przez 0 - blad" << endl;
	}
	else if(a.re!=0 && a.im!=0) 
	{
		wyn.re /= a.re;
		wyn.im /= a.im;
		cout << "Wynik dzielenia x=" << wyn.re << ", y=" << wyn.im << endl;
	}
		return wyn;
	
	cout << endl;
}
urojona urojona::dodawanie(urojona a)
{
	urojona wyn(this->re, this->im);
	wyn.re += a.re;
	wyn.im += a.im;
	cout << "Wynik dodawania x=" << wyn.re << ", y=" << wyn.im << endl;
	return wyn;
	cout << endl <<endl;
}

urojona urojona::odejmowanie(urojona a)
{
	urojona wyn(this->re,this->im);
	wyn.re -= a.re;
	wyn.im -= a.im;
	cout << "Wynik odejmowania x=" << wyn.re << ", y=" << wyn.im << endl;
	return wyn;
	cout << endl;
}

urojona urojona::mnozenie(urojona a)
{

	urojona wyn(this->re, this->im);
	wyn.re *= a.re;
	wyn.im *= a.im;
	cout << "Wynik mnozenia x=" << wyn.re << ", y=" << wyn.im << endl;
	return wyn;
	cout << endl;
}