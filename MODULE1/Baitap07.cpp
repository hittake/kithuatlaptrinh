#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	float a,b,c,P,S,R;
	
	cin >> a >> b;
	
	c = sqrt(pow(a,2) + pow(b,2));
	P = a + b + c;
	S = 0.5 * a * b;
	R = S / (P/2);
	
	cout << "Canh huyen = " << c << "\n";
	cout << "Chu vi = " << P << "\n";
	cout << "Dien tich = " << S << "\n";
	cout << "Ban kinh duong trong noi tiep = " << R << "\n";
	
	return 0;

}
