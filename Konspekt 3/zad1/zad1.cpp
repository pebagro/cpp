//deklaracja bibliotek + headerów + std
#include <stdio.h> 
#include "point.h"
#include "point.cpp"
//Funkcja główna
int main() {

	point p; // obiekt pierwszy - p wykorzystujący konstruktor 1
	p.setX(5);
	p.setY(10);
    p.show();
	p.move(-5, 12);
	p.getX();
	p.getY();
	p.show();


	point *d=new point(1,2); // obiekt drugi - d wykorzystujący konstruktor 2
	d->show();
	d->getX();
	d->getY();
	d->move(5, 7);
	d->getX();
	d->getY();
	d->show();
	return 0;
}