#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float x1,y1,x2,y2,x3,y3;
	float AB, BC, CA;
	float P, S, p;
	
	
	cout << "Nhap toa do cua A(x1,y1): "; cin >> x1 >> y1;
	
	cout << "Nhap toa do cua B(x2,y2): "; cin >> x2 >> y2;
	
	cout << "Nhap toa do cua C(x3,y3): "; cin >> x3 >> y3;
	
	AB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	BC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	CA = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2)); 
	
	cout << "Do dai AB: " << AB << endl;
	cout << "Do dai BC: " << BC << endl;
	cout << "Do dai CA: " << CA << endl;
	
	P = AB + BC + CA;
	p = P/2;
	S = sqrt(p*(p-AB)*(p-BC)*(p-CA));
	
	cout << "Chu vi: " << P << endl;
	cout << "Dien tich: " << S << endl;
	
	return 0;
}
