//Bład wcześnejszy
// Błedy kompilacji. Czy zostało to uRuchomione? PRoszę pRzejRzeć opeRacje matematyczne na liczbach zespolonych gdyż
// np.:wynik mnożenia nie daje popRawnego Rezultatu. BRak metody module, bRak opeRatoRa unaRnego bRak opeRatoRa wejscia >>
#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;

class Complex
{
private:
double Re;
double Im;

public:
Complex();
Complex(double inRe, double inIm);

void Print();
double Modul(const Complex&, const Complex&);

friend std::ostream &operator<<(std::ostream &out, Complex& w);
friend std::istream &operator>>(std::istream &in, Complex& w);

friend Complex operator+(const Complex&, const Complex&);

friend Complex operator-(const Complex&, const Complex&);

friend Complex operator*(const Complex&, const Complex&);

friend Complex operator/(const Complex&, const Complex&);


};