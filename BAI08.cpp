#include <iostream>

using namespace std;

void input(int &n) {
    do {
        cout << "Nhap vao so n (0 <= n <= 65536): ";
        cin >> n;
        if (n < 0 || n > 65536) {
            cout << "Khong hop le, vui long nhap lai\n";
        }
    } while (n < 0 || n > 65536);
}

void calc(int n, int &count, int digits[], int &sum) {
    count = 0;
    sum = 0;

    if (n == 0) {
        count = 1;
        digits[0] = 0;
        sum = 0;
        return;
    }

    int temp = n;
    int idx = 0;
    int tempArr[10];

    while (temp > 0) {
        int digit = temp % 10;
        tempArr[idx] = digit;
        sum += digit;
        idx++;
        temp /= 10;
    }

    count = idx;

    for (int i = 0; i < count; i++) {
        digits[i] = tempArr[count - 1 - i];
    }
}

int main() {
    int n;
    int count, sum;
    int digits[10]; 

    input(n);
    calc(n, count, digits, sum);

    cout << "So chu so cua n la: " << count << endl;
    
    cout << "Cac so cua n la: ";
    for (int i = 0; i < count; i++) {
        cout << digits[i] << " ";
    }
    cout << endl;
    
    cout << "Tong cua so n la: " << sum << endl;

    return 0;
}