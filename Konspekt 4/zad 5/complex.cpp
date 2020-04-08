#include "complex.h"
#include <iostream>
using namespace std;

complex::complex()
{
	this->re = 0;
	this->im = 0;
}

complex::complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

void complex::print()
{
	cout <<endl<< re << "+" << im << "i\n"<<endl;
}

ostream& operator<<(ostream& out, complex& w)
{
	out << "(" << w.re << "," << w.im << "i)" << endl;
	return out;
}

complex operator-(const complex&a, const complex &b)
{	
	complex wyn;
	wyn.re = a.re-b.re;
	wyn.im = a.im-b.im;
	return wyn;
}

complex operator+(const complex&a, const complex&b)
{
	complex wyn;
	wyn.re = a.re+b.re;
	wyn.im = a.im+b.im;
	return wyn;
}

complex operator*(const complex&a, const complex&b)
{
	complex wyn;
	wyn.re = a.re*b.re;
	wyn.im = a.im*b.im;
	return wyn;
}

complex operator/(const complex&a, const complex&b)
{
	complex wyn;
	if (b.re == 0 && b.im == 0)
	{ 
		cout << "Dzielenie przez 0 - blad" << endl; 
	}

	if (b.re != 0 && b.im != 0) 
	{
		wyn.re = a.re / b.re;
		wyn.im = a.im / b.im;
	}
	return wyn;;
}