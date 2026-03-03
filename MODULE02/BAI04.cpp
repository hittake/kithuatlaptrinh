#include <iostream>
#include <cmath>
using namespace std;

void nhap(double *a);
double tinh_dtxq(double *a, double *S);
double tinh_dttp(double *a, double *S);
double tinh_tt(double *a, double *V);

double canh,Sxq,Stp,tt;

int main () {

    nhap(&canh);
    tinh_dtxq(&canh, &Sxq);
    tinh_dttp(&canh, &Stp);
    tinh_tt(&canh, &tt);
    
    cout << "Ta co hinh lap phuong voi canh = " << canh << endl;
    cout << "Dien tich xung quanh la = " << Sxq << endl;
    cout << "Dien tich toan phan la = " << Stp << endl;
    cout << "The tich la = " << tt << endl;
    return 0;
}
void nhap(double *a) {
    cout << "Nhap do dai canh a: ";
    cin >> *a;
}

double tinh_dtxq(double *a, double *S) {
    *S = 4 * pow(*a, 2);
    return *S;
}

double tinh_dttp(double *a, double *S) {
    *S = 6 * pow(*a, 2);
    return *S;
}

double tinh_tt(double *a, double *V) {
    *V = pow(*a, 3);
    return *V;
}