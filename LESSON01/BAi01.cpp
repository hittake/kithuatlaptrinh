#include <iostream>

using namespace std;

int main () {

    float a,b,h;

    cout << "Nhap canh day a: "; cin >> a;

    cout << "Nhap canh day b: "; cin >> b;

    cout << "NHap chieu cao h: "; cin >> h;

    cout << "Dien tich hinh thang la: " << ((a+b)*h) / 2;

    return 0;
}