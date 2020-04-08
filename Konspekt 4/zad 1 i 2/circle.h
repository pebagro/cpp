#pragma once
#include "point.h"
using namespace std;
class circle
{
private:
	point s;
	double pr; 
public:
	circle();
	circle(double x, double y, double r);
	friend void znajdz(circle &);

	friend bool compare(circle &, circle &);
	friend circle add(circle&, circle&);

};


