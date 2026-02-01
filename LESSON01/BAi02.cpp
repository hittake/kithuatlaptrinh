#include <iostream>

using namespace std;

int main () {

    float ps, plg, pss, r, price;

    cout << "Nhap gia cua tivi Sony: "; cin >> ps;
    cout << "Nhap gia cua tivi LG: "; cin >> plg;
    cout << "Nhap gia cua tivi Samsung: "; cin >> pss;
    cout << "Nhap uu dai giam gia %: "; cin >> r;
    
    r /= 100;

    price = (ps + plg + pss) - (ps + plg + pss) * r;

    cout << "Gia khi mua 3 chiec tivi la: " << price;
    return 0;
}