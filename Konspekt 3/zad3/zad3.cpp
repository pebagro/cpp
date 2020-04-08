#include "tabdyn.h"
#include "tabdyn.cpp"
#include<iostream>
using namespace std;

int main() 
	{
	tabdyn x(5);
	x.setelement();
	x.getelement(2);

	int suma = 0;
	suma = x.sum();
	float sr = 0;

	sr = x.mean();
	cout << "Suma elementow tablicy: " << suma << ", srednia =" << sr << endl;
	//*********************************
	tabdyn y(6); 
	y.setelement();
	y.getelement(2);
	int suma2 = 0;
	suma2 = y.sum();
	float sr2 = 0;
	sr2 = y.mean();
	cout << "Suma elementow tablicy: " << suma2 << ", srednia =" << sr2 << endl;

	system("PAUSE");
	return 0;
}