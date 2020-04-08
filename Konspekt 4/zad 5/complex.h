#pragma once
#include <iostream>
using namespace std;

class complex
{
private: 
    double re;
    double im;
    
public:
	complex();
	complex(double re, double im);

	void print();

  friend ostream& operator<<(ostream& out, complex& W);
  friend complex operator- (const complex&, const complex&);
  friend complex operator+ (const complex&, const complex&);
  friend complex operator/ (const complex&, const complex&);
  friend complex operator* (const complex&, const complex&);
};

