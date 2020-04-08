#include "complex.h"
#include "complex.cpp"
using namespace std;

int main() {
	complex a(3, 4);
	complex b(1, 23);
	complex c(1, 0);
	complex d(2, 2.3);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	complex qq = a + b;
	cout << qq;
	complex aa = a - b;
	cout << aa;
	complex ww = d * b;
	cout << ww;
	complex ss = b / c;
	cout << ss;
	ss = a / b;
	cout << ss;
}