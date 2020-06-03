#include "Complex.h"
#include <iostream>
#include <math.h>
using namespace std;

Complex::Complex()
{
	this->Re = 0;
	this->Im = 0;
}

Complex::Complex(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}

void Complex::Print()
{
	cout<<Re<<"+"<<Im<<"i\n";
}

ostream& operator<<(ostream& out, Complex& q)
{
	out << "(" << q.Re << ", " << q.Im << "i)\n" << endl;
	return out;
}

istream& operator>>(istream &in, Complex& q)
{
	in >> q.Re,q.Im;
	return in;
}

Complex operator-(const Complex&a, const Complex &b)
{	
	Complex wyn;
	wyn.Re = a.Re-b.Re;
	wyn.Im = a.Im-b.Im;
	return wyn;
}

Complex operator+(const Complex&a, const Complex&b)
{
	Complex wyn;
	wyn.Re = a.Re+b.Re;
	wyn.Im = a.Im+b.Im;
	return wyn;
}

Complex operator*(const Complex&a, const Complex&b)
{
	Complex wyn;
	wyn.Re = (a.Re*b.Re) - (a.Im*b.Im);
	wyn.Im = (a.Re*b.Im) + (b.Re*a.Re);
	return wyn;
	//(a.Re+a.Im)(b.Re+b.Im)=a.Re*b.Re+a.Re*b.Im+b.Rex+bdi2
	//(a+bx)(c+dx)=ac+adx+bcx+bdx2
}

Complex operator/(const Complex&a, const Complex&b)
{
	Complex wyn;
	if (b.Re == 0 && b.Im == 0)
	{ 
		cout << "Dzielenie przez 0 - blad" << endl; 
	}

	if (b.Re != 0 && b.Im != 0) 
	{
		wyn.Re = a.Re / b.Re;
		wyn.Im = a.Im / b.Im;
	}
	return wyn;
}

double Complex::Modul(const Complex&a, const Complex&b)
{
	double modul;

	modul = sqrt(a.Re*b.Re+a.Im*b.Im);

	return modul;
}