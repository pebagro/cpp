#include "osoba.h"

#include<iostream>
using namespace std;
osoba::osoba(string i, string n)
{
	this->imie = i;
	this->nazwisko = n;
}

void osoba::druk()
{
	cout <<endl<< "Dane studenta" <<endl <<"Imie: " << this->imie << endl<<"Nazwisko: " << this->nazwisko << endl;
}
