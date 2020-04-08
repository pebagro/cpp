#include "tablica.h"

tablica::tablica()
{
	srand(time(NULL));
	for (int i = 0;i < 10;i++) {
		this->tab[i] = rand() % 100;
	}

}

int tablica::suma()
{
	int wyn = 0;
	for (int i = 0;i < 10;i++) {
		wyn += this->tab[i];
	}
	return wyn;
}

int tablica::min()
{
	int m = this->tab[0];
	for (int i = 0;i < 10;i++) {
		if (this->tab[i] < m)m = this->tab[i];
	}
	return m;
}

int tablica::max()
{
	int m = this->tab[0];
	for (int i = 0;i < 10;i++) {
		if (this->tab[i] > m)m = this->tab[i];
	}
	return m;
}

void tablica::show()
{
	for (int i = 0;i < 10;i++) {
		cout << "tab[" << i << "]=" << this->tab[i] << endl;
	}
}
