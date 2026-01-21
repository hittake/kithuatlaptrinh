#include <iostream>
#include <cmath>

int main () {
	
	int n;
	int nums[5];
	float sum=0;
	std::cout << "Nhap so n: "; std::cin >> n;
	
	for(int i = 0; i <= 5; i++) {
			nums[i] = n % 10;
			if (n > 10) {
				n /= 10;
			}
			else {
				break;
			}
	}
	
	std::cout << "Cac so tuong ung la: ";
	for(int i = 5; i >= 0; i--) {
			std::cout << nums[i] << " ";
	}
	
	for(int i = 0; i <= 5; i++) {
			sum += nums[i];
	}
	std::cout << "\nTong cac so la : " << sum << "\n" << "Trung binh la: " << sum/6;
	return 0;
	
}
