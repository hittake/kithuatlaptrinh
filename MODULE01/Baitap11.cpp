#include <iostream>
#include <cmath>

using namespace std;

int main () {
	double R,L,C,U;
	double ZL,ZC,Z,I;
	
	const double pi = 3.14;
	const double omega = 100 * pi;
	
	cout << "Nhap dien tro "; cin >> R;
	cout << "Nhap he so tu cam L: "; cin >> L;
	cout << "Nhap Hieu dung C: "; cin >> C;
	cout << "Nhap hieu dien the hieu dung: "; cin >> U;
	
	ZL = omega * L;
	
	ZC = 1 / (omega * C);
	
	Z = sqrt(pow(R, 2) + pow(ZL - ZC, 2));
	
	I = U / Z;
	
	cout << "************************\n";
	cout << "ZL = " << ZL << endl;
	cout << "ZC = " << ZC << endl;
	cout << "Z = " << Z << endl;
	cout << "I = " << I << endl;

	return 0;
}
