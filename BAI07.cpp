#include <iostream>
#include <cmath>

using namespace std;

void nhap(double *X1, double *Y1, double *X2, double *Y2) {
    cout << "Nhap toa do diem A(x1,y1)" << endl;
    cout << "x1 = "; cin >> *X1;
    cout << "y1 = "; cin >> *Y1;

    cout << "Nhap toa do diem B(x2,y2)" << endl;
    cout << "x2 = "; cin >> *X2;
    cout << "y2 = "; cin >> *Y2;
}

double kc(double *X1, double *Y1, double *X2, double *Y2) {
    return sqrt(pow(*X2 - *X1, 2) + pow(*Y2 - *Y1, 2));
}
int main () {

    double x1,y1,x2,y2;
    double distance;

    nhap(&x1,&y1,&x2,&y2);
    distance = kc(&x1,&y1,&x2,&y2);

    cout << "Khoang cach giua hai diem A va B la: " << distance;

    return 0;
}