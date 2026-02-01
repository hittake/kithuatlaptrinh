#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float r;
	const float pi = 3.14;
	cin >> r;
	cout << "Chu vi la: " << 2*pi*r << endl;
	cout << "Dien tich la: " << pi*pow(r,2);
	
	return 0;
}
