#include "circle.h"
#include "point.h"
#include <iostream>
#include <math.h>
using namespace std;
point::point()
{
	this->x = 0;
	this->y = 0;
}

point::point(double x, double y)
{
	this->x = x;
	this->y = y;
}
