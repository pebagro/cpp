#include "tabdyn.h"
#include<iostream>
using namespace std;

tabdyn::tabdyn(int s)
{
	this->size = s;
	TablicaDyn = new int[size];
}

void tabdyn::setelement()
{
	for (int i = 0;i < this->size;i++) {
		cout << "Podaj " << i << " element: ";
		cin >> this->TablicaDyn[i];
		cout << endl;
	}
}

void tabdyn::getelement(int q)
{
	cout << "tab[" << q << "]=" << this->TablicaDyn[q];
	cout << endl;
}

int tabdyn::sum()
{
	int wyn = 0;
	for (int i = 0;i < this->size;i++) {
		wyn += this->TablicaDyn[i];
	}
	return wyn;
}

float tabdyn::mean()
{
	float wyn = 0;
	for (int i = 0;i < this->size;i++) {
		wyn += this->TablicaDyn[i];
	}
	wyn = wyn / (this->size);

	return wyn;
}
