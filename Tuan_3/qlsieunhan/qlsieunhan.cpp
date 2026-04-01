#include <iostream>
#include <vector>
#include <string>

using namespace std;

class SieuNhan {
public:
    string ten, vu_khi, mau_sac;

    SieuNhan(string t, string v, string m) : ten(t), vu_khi(v), mau_sac(m) {}

    void thongTin() {
        cout << "Sieu nhan " << ten << ", vu khi: " << vu_khi << ", mau: " << mau_sac << endl;
    }
};

int main() {
    vector<SieuNhan> danhSach;
    string ten, vu_khi, mau;
    string luaChon;

    while (true) {
        cout << "Nhap ten sieu nhan (hoac go 'exit' de dung): ";
        cin >> ten;
        if (ten == "exit") break;

        cout << "Nhap vu khi: ";
        cin >> vu_khi;
        cout << "Nhap mau sac: ";
        cin >> mau;

        danhSach.push_back(SieuNhan(ten, vu_khi, mau));
        cout << "--- Da them thanh cong ---\n";
    }
    cout << "\n--- DANH SACH SIEU NHAN THE GIOI ---" << endl;
    for (int i = 0; i < danhSach.size(); i++) {
        danhSach[i].thongTin();
    }

    return 0;
}