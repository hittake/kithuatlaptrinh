#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, y;
    int n;

    cout << "Nhap 2 so thuc x, y: "; 
    cin >> x >> y;
    cout << "Nhap so n: "; 
    cin >> n;

    float t = sqrt(pow(x, 5) + exp(log(abs(y)) + 1)) + (1 + sin(x)) / (cos(n * x) + sqrt(2 + abs(n)));


    float s = abs(x - sqrt(17)) * (y + log10(abs(x) + 25) + y);

	
    cout << "T = " << t << endl;
    cout << "S = " << s << endl;

    return 0;
}