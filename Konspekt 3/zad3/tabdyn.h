#pragma once
class tabdyn
{
public:
	int* TablicaDyn;
	int size;

	tabdyn(int s);
	
	int sum();
	float mean();
	void setelement();
	void getelement(int q);
};

