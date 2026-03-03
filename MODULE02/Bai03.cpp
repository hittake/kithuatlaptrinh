#include <iostream>
#include <cmath>
using namespace std;

void nhap(int *year) {
    cout << "Nhap nam sinh cua ban: ";
    cin >> *year;
}

int tinh_tuoi(int *year, int *age) {
    *age = 2026 - *year;
    return *age;
}

void hienthi(int *age) {
    cout << "Ban nam nay " << *age << " tuoi";
}

int main () {

    int namsinh, tuoi;

    nhap(&namsinh);
    tinh_tuoi(&namsinh,&tuoi);
    hienthi(&tuoi);
    return 0;
}