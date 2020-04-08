#pragma once
#include "point.h"
class circle
{
private: 
	point s;
	double pr; 

public:
	circle();
	circle(double x, double y, double r);
	friend circle add(circle&, circle&);
	friend circle operator+ (circle& a, circle& b);
	friend bool operator> (circle& a, circle& b);
	friend bool ccompare(circle &, circle &);
	
};


