#include <iostream>
#include <cmath>
int main(){
	
	float sodu, tienrut, tiengui, phigiaodich;
	const float mucphi = 0.01;
	
	std::cout << "Nhap so du tk dau thang: "; std::cin >> sodu;
	std::cout << "Nhap tong tien rut: "; std::cin >> tienrut;
	std::cout << "Nhap tong tien gui: "; std::cin >> tiengui;
	
	phigiaodich = (tienrut + tiengui) * mucphi;
	std::cout << "Phi giao dich: " << phigiaodich << "\n";
	
	std::cout << "So du cuoi thang: " << sodu - tienrut + tiengui - phigiaodich;
	
}
