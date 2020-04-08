#include "rational.h"
#include "rational.cpp"

using namespace std;
int main() {

	rational a(1, 1);
	rational b(1, 1);
	rational c(1, 3);

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	rational d=a + b;
	cout << d << endl;
	rational e = d - a;
	cout << e << endl;
	return 0;
}