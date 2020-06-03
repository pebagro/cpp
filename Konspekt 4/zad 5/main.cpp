#include "Complex.h"
#include "Complex.cpp"
#include <complex>
using namespace std;

int main() {
	Complex a(1, 1);
	Complex b(1, 3);
	Complex c(0, 0);
	Complex d(2, 2.3);

	cout << "\nDane wyjsciowe\n";
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	
	cout << "Obliczenia\n";
	Complex qq = a+b;
	cout << qq;
	Complex aa = b - a;
	cout << aa;
	Complex ww = a * b;
	cout << ww;
	Complex ss = b / c;
	cout << ss;
	ss = a / d;
	cout << ss;

	return(0);
}