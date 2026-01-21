#include <iostream>
#include <cmath>

int main() {
	float x,y;
	int n;
	std::cout << "Nhap 2 so thuc x, y: "; std::cin >> x >> y;
	std::cout << "Nhap so n: "; std::cin >> n;

	
	float t = sqrt(pow(x, 5) + exp(log10(y)+1)) + (1+sin(x)) / (cos(n*x) + sqrt(2 + abs(n)));
	float s = abs(x - sqrt(17)) * (y + log10(abs(x)+25)) + y;
	std::cout << t << std::endl << s;
	return 0;
	
}
