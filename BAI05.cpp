#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double ham_gx(double *x) {
    return *x * sin(*x + 2) + 5;
}
double ham_fxy(double *x, double *y) {
    double gx = ham_gx(x);

    double term1 = abs(gx - sqrt(17.0));
    double term2 = gx + log10(abs(gx) + 25.0) + *y;

    return term1 * term2;
}
int main () {

    double m,n,gx,fxy;

    cout << "Nhap gia tri x: "; cin >> m;
    cout << "Nhap gia tri y: "; cin >> n;
    gx = ham_gx(&m);
    fxy = ham_fxy(&m, &n);

    cout << fixed << setprecision(2);
    
    cout << "g(x) = " << gx << endl;
    cout << "f(x, y) = " << fxy;
    return 0;
}