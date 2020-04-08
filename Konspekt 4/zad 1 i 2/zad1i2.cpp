#include "circle.h"
#include "point.h"
#include "circle.cpp"
#include "point.cpp"
#include <iostream>

using namespace std;

int main() {

	circle z(4, 4, 1);
	circle c(-5, 2, 2);
	circle b(4, -5, 2);

	znajdz(z);
	znajdz(c);
	znajdz(b);

	if (compare(z, c))cout << endl<<"Okrag jest wiekszy" << endl<<endl;
	else cout <<endl<< "Okrag jest mniejszy" << endl<<endl;

	circle q;
	q=add(c, b);

	return 0;
}