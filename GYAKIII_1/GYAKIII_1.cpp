#include <iostream>
using namespace std;
double Atlag (int*, int );// számtani átlagot számoló függvény

int main()
{
	int jegy[10] = { 1,2,3,23,34,56,23,45,21,23 };
	int jegy2[10] = { 10, 25, 43, 23, 34, 56, 23, 45, 21, 23 };
	cout << "Szamtani atlag : " << Atlag(jegy, 10) << endl;
	cout << "Szamtani atlag2 : " << Atlag(jegy2, 10) << endl;
			return 0;
}
double Atlag(int* tmb, int db)
{
		double osszeg = 0;
		for (int i = 0; i < db; i++) osszeg = osszeg + tmb[i];
	return osszeg / db;
}
	