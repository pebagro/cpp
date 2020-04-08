#include "urojona.h"
#include "urojona.cpp"
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	urojona q(2, 2);
	urojona w(4, 1);
	urojona e(2, 0);
	urojona e2(0,1);
	w.dodawanie(q);
	w.odejmowanie(q);
	w.mnozenie(q);
	q.dzielenie(e);
	q.dzielenie(e2);
	q.dzielenie(w);
	
	

}