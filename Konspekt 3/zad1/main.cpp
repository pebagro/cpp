#include <stdio.h> 
#include "punkt.h"
#include "punkt.cpp"
using namespace std;
//Funkcja główna
int main() {

	punkt p; 
	p.setX(5);
	p.setY(10);
	p.show();
	p.move(-5, 12);
	p.getX();
	p.getY();
	p.show();


	punkt* d = new punkt(1, 2); 
	d->show();
	d->getX();
	d->getY();
	d->move(5, 7);
	d->getX();
	d->getY();
	d->show();

	system("PAUSE");
	return 0;
}