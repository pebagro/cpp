#pragma once
#include "osoba.h"

class student
{
	public:

	int ects=0;
	osoba stud;
	
	student(string i, string n, int a);
	
	bool czyZdal();
	void daneStudenta();
};

