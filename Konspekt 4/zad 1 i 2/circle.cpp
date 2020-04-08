#include "circle.h"
#include "point.h"
#include <iostream>
#include <math.h>
#define PI  3.14159265359
using namespace std;

circle::circle()
{
	this->s.x = 0;
	this->s.y = 0;
	this->pr = 0;
}

circle::circle(double x, double y, double r) :s(x, y)
{
	this->pr = r;
}

bool compare(circle &a, circle &b)
{
	if (a.pr > b.pr) return true;
	else return false;
}

circle add(circle& a, circle& b)
{
	circle wyn;
	wyn.s.x = ((a.s.x) + (b.s.x)) / 2;
	wyn.s.y = ((a.s.y) + (b.s.y)) / 2;
	wyn.pr = (abs(a.pr) + abs(b.pr));

	cout << "s.X =" << wyn.s.x << endl;
	cout << "s.Ys=" << wyn.s.y << endl;
	cout << "Pr  =" << wyn.pr << endl;

	return wyn;
}


void znajdz(circle &a)
{


	int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
	double u = a.s.x;
	double j = a.s.y;
	for (int i = 0;i < 360;i++) {

		a.s.x = u;
		a.s.y = j;

		a.s.x += (a.pr * cos(i));
		a.s.y += (a.pr * sin(i));

		if (a.s.x > 0 && a.s.y > 0) c1 = 1;
		if (a.s.x < 0 && a.s.y > 0) c2 = 1;
		if (a.s.x < 0 && a.s.y < 0) c3 = 1;
		if (a.s.x > 0 && a.s.y < 0) c4 = 1;
	}

	if(c1 == 1) { cout << "Okrag jest w 1 cwiartce" << endl; }
	if(c2 == 1) { cout << "Okrag jest w 2 cwiartce" << endl; }
	if(c3 == 1) { cout << "Okrag jest w 3 cwiartce" << endl; }
	if(c4 == 1) { cout << "Okrag jest w 4 cwiartce" << endl; }

}


