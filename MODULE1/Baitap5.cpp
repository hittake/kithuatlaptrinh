#include <iostream>
#include <cmath>

using namespace std;
int main() {
	float time, overtime, pay;
	const float bonus = 1.5;
	
	cout << "Nhap tong so gio lam viec: "; cin >> time;
	cout << "Nhap tong so gio lam them: "; cin >> overtime;
	cout << "Nhap so tien tra moi gio: "; cin >> pay;
	
	cout << "So tien tra cho so gio lam viec thuong: " << time*pay << "\n";
	cout << "So tien tra cho so gio lam them: " << overtime*(pay+pay*bonus) << "\n";
	
	return 0;
}
