#include <iostream>
#include <iomanip>
using namespace std;

void nhap(int *a, int *b) {
    bool check = 0;
    do {
        
        cout << "Nhap vao tu so x: "; cin >> *a;
        cout << "NHap vao mau so y: "; cin >> *b;   
        
        if (*a < 0 || *b <= 0) check = 1;
    } while (check);

}

void hienthi(int *a, int *b) {

    char gach = '-';

    int max;
    if (*a > *b) max = *a;
    else max = *b;

    int dem = 0;
    while (max > 0) {
        max /= 10;
        dem++;
    };

    cout << *a << endl;
    for (int i = 1; i <= dem; i++) {
        cout << gach;
    }
    cout << endl;
    cout << *b << endl;
}

void tong(int *a, int *b, int *c, int *d, int *ttong, int *mtong) {
    *ttong = *a * *d + *c * * b;
    *mtong = *b * *d;
}
int main () {

    int x1,y1,x2,y2,tu,mau;

    nhap(&x1,&y1);
    cout << "Phan so:" << endl;
    hienthi(&x1,&y1);

    nhap(&x2,&y2);
    cout << "Phan so:" << endl;
    hienthi(&x2,&y2);

    cout << "Tong cua hai phan so: " << endl;
    tong(&x1,&y1,&x2,&y2,&tu,&mau);
    hienthi(&tu,&mau);
    
    return 0;
}