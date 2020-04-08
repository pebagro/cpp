#pragma once // dyrektywa pozwalająca użycie headera tylko raz w wykonaniu pozniej maina
using namespace std;
class point
{
private:
	int x, y; 
public:

	void setX(int x);
	void setY(int y);

	int getX(); 
	int getY();

	void move(int q, int w);
	void show();

	point();			
	point(int x, int y);
};

