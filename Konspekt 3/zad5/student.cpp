#include "student.h"
#include<iostream>
using namespace std;


student::student(string i, string n, int a):stud(i, n)
{
	this->ects = a;
}

bool student::czyZdal()
{
	if (this->ects > 22)
		return true;
	else
	{
		return false;
	}
}

void student::daneStudenta()
{
	if (czyZdal()) 
		{
		 cout << "Zdal na nastepny semestr" << endl<<endl; 
		}
	else 
		{
		 cout << "Za malo pkt ECTS - nie zdal" << endl<<endl; 
		}

}

