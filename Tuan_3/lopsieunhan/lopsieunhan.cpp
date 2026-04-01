#include <iostream>
#include <string>
using namespace std;

class SieuNhan {
public:
    string ten, vu_khi, mau_sac;

    SieuNhan(string t, string v, string m) 
       : ten(t), vu_khi(v), mau_sac(m) {}

    void thongTin() {
        cout << "Sieu nhan " << ten << ", vu khi: " << vu_khi << ", mau: " << mau_sac << endl;
    }
};

int main() {
    SieuNhan sn_A("A", "Kiem", "Do");
    SieuNhan sn_B("B", "Khien", "Xanh");
    sn_A.thongTin();
    sn_B.thongTin();
    return 0;
}