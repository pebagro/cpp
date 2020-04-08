#include "circle.h"
#include "point.h"
#include "point.cpp"
#include "circle.cpp"
#include<iostream>
using namespace std;

int main() {

	circle q(12, 4, 13);
	circle w(10, 0, 1);
	circle e(1, 2, 10);

	circle kolo;
	kolo = q + w;
	if (q>e)cout << "Okrag Q+W jest wiekszy";
	else cout << "Okrag E jest mniejszy";
	

}