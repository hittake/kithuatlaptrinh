#include <iostream>
#include <cmath>
using namespace std;

void nhap(double *x, double *y, double *z) {
    bool verify = 0;
    do {
        
        cout << "Nhap canh a: "; cin >> *x;
        cout << "Nhap canh b: "; cin >> *y;
        cout << "Nhap canh c: "; cin >> *z;

        if(*x+*y>*z && *x+*z>*y && *y+*z>*x && *x > 0 && *y > 0 && *y > 0 ) verify = 1;
        else {
            cout << "Day khong phai la 1 tam giac!\nVui long nhap lai!\n";
        }
    } while (verify != 1);

}

void tinh(double *x, double *y, double *z, double &P, double &S) {
    P = *x + *y + *z;
    double p = P/2;

    S = sqrt(p * (p-*x)*(p-*y)*(p-*z));
}

void hienthi(double *P, double *S) {
    cout << "Chu vi tam giac = " << *P << endl;
    cout << "Dien tich = " << *S;
}
int main () {

    double a,b,c;
    double chuvi,dientich;

    nhap(&a,&b,&c);
    tinh(&a,&b,&c,chuvi,dientich);
    hienthi(&chuvi,&dientich);

    return 0;
}