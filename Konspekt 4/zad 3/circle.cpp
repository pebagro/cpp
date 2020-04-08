#include "circle.h"
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

circle::circle(double x, double y, double r):s(x,y)
{
	this->pr = r;
}

circle operator+(circle& a, circle& b)
{
	circle wyn;
	wyn.s.x = ((a.s.x) + (b.s.x)) / 2;
	wyn.s.y = ((a.s.y) + (b.s.y)) / 2;
	wyn.pr = (abs(a.pr) + abs(b.pr));

	cout << "S.X =" << wyn.s.x << endl;
	cout << "S.Y =" << wyn.s.y << endl;
	cout << "PR =" << wyn.pr << endl;

	return wyn;
}

bool operator>(circle& a, circle& b)
{
	if (a.pr > b.pr) return true;
	else return false;
}
