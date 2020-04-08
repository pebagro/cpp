#pragma once
#include<iostream>
using namespace std;
class rational
{
private:
	int licznik, mianownik;
public:
	rational(int A = 1, int B = 1)
	{
		licznik = A;
		mianownik = B;
	}
	//Przeci��enie operatora + za pomoc� funkcji sk�adowej klasy
	rational operator+(const rational& U)const;
	friend ostream& operator<<(ostream& out, rational& W);
	friend rational operator- (const rational&, const rational&);
};

