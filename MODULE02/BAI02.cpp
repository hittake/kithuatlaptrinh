#include <iostream>
#include <cmath>
using namespace std;

void nhap(double *x) {
    cout << "Nhap vao 1 so thuc: ";
    cin >> *x;
}

double f(double *x) {
    return 1 + *x + pow(*x,2) + pow(*x,3) + pow(*x,4) + pow(*x,5);
}
int main () {

    double a,b,c,d;
    double tong = 0;

    nhap(&a);
    nhap(&b);
    nhap(&c);
    nhap(&d);

    tong += f(&a);
    tong += f(&b);
    tong += f(&c);
    tong += f(&d);

    cout << "Tong la: " << tong;

    return 0;
}