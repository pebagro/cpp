#include "student.h"
#include "student.cpp"
#include "osoba.cpp"

using namespace std;

int main() {
	student a();

	student adam("Adam", "Adamowski", 3);
	student maciej("Maciej", "Maciejowski", 23);

	adam.stud.druk();

	adam.daneStudenta();

	maciej.stud.druk();

	maciej.daneStudenta();
}