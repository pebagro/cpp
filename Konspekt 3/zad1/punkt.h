#pragma once
class punkt
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

	punkt();
	punkt(int x, int y);
};

