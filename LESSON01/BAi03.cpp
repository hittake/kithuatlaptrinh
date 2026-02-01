#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const long long LUONG_CO_BAN_CHUAN = 1490000;
    
    double he_so_luong;
    
    cout << "Nhap he so luong (hsl): ";
    cin >> he_so_luong;
    
    double luong_theo_he_so = LUONG_CO_BAN_CHUAN * he_so_luong;
    
    double phu_cap = luong_theo_he_so * 0.30;       // 30%
    double bao_hiem_xh = luong_theo_he_so * 0.08;   // 8%
    double bao_hiem_yt = luong_theo_he_so * 0.01;   // 1%
    double cong_doan = luong_theo_he_so * 0.01;     // 1%
    
    double luong_thuc_linh = luong_theo_he_so + phu_cap - (bao_hiem_xh + bao_hiem_yt + cong_doan);
    
    cout << fixed << setprecision(0); 
    cout << "--- BANG LUONG CHI TIET ---" << endl;
    cout << "Luong co so: " << luong_theo_he_so << " VND" << endl;
    cout << "Phu cap (30%): +" << phu_cap << " VND" << endl;
    cout << "Khau tru (10%): -" << (bao_hiem_xh + bao_hiem_yt + cong_doan) << " VND" << endl;
    cout << "---------------------------" << endl;
    cout << "LUONG THUC LINH: " << luong_thuc_linh << " VND" << endl;

    return 0;
}