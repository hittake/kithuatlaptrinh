#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, k;
	float r, pay;
	
	cout << "So sach khach mua: "; cin >> n;
	cout << "Gia quyen sach: "; cin >> k;
	cout << "Giam gia %?: "; cin >> r;
	
	pay = k - r*k*0.01;
	
	cout << "Thanh toan: " << n*pay;
	
}
