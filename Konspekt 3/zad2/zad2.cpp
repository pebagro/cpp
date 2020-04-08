#include <iostream>
#include "tablica.h"
#include "tablica.cpp"
using namespace std;

int main() {

	tablica tab1;
	tablica tab2;
	tab2.show();
	tab1.show();
	int max;
	max = tab1.max();
	int min;
	min = tab1.min();
	int sum;
	sum = tab1.suma();
	cout << "Maksymalna wartosc w tablicy: " << max << endl <<"Minimalna wartosc w tablicy: " << min <<endl << "Suma wszystkich elementow: " << sum<<endl;


	system("PAUSE");
	return 0;
}