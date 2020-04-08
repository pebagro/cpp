#include "rational.h"

using namespace std;

rational rational::operator+(const rational& U) const
{
	rational Wynik;
	Wynik.licznik = U.mianownik * licznik + mianownik * U.licznik;
	Wynik.mianownik = U.mianownik * mianownik;
	return Wynik;
}

ostream& operator<<(ostream& out, rational& W)
{
	if (W.licznik < W.mianownik) {
		out << W.licznik << "/" << W.mianownik;
		return out;
	}
	if (W.licznik == W.mianownik) {
		out << 1;
		return out;
	}

	if (W.licznik > W.mianownik) {
		int a = W.licznik / W.mianownik;
		int q = W.licznik % W.mianownik;
		out << a << " " << q << "/" << W.mianownik;
	}
	return out;
}

rational operator-(const rational& U1, const rational& U2)
{
	rational Wynik;
	Wynik.licznik = U2.mianownik * U1.licznik - U1.mianownik * U2.licznik;
	Wynik.mianownik = U1.mianownik * U2.mianownik;
	return Wynik;
}