#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float x1,y1,x2,y2, kc;
	
	cout << "Nhap toa do cua A(x1,y1): "; cin >> x1 >> y1;
	
	cout << "Nhap toa do cua B(x2,y2): "; cin >> x2 >> y2;
	
	kc = sqrt(pow(x2 - x1, 2) + pow(y2-y1, 2)); 
	
	cout << "Khoang cach giua A va b la : " << kc;
}
