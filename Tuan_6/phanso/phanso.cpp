#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo {
private:
    int tu, mau;

    int gcd(int a, int b) {
        if (b == 0) return abs(a);
        return gcd(b, a % b);
    }

    void rutGon() {
        int g = gcd(tu, mau);
        tu /= g;
        mau /= g;
        if (mau < 0) {
            tu = -tu;
            mau = -mau;
        }
    }

public:
    PhanSo(int t = 0, int m = 1) {
        if (m == 0) {
            cout << "Mau = 0 khong hop le!\n";
            m = 1;
        }
        tu = t;
        mau = m;
        rutGon();
    }

    void nhap() {
        cin >> tu >> mau;
        while (mau == 0) {
            cout << "Nhap lai mau: ";
            cin >> mau;
        }
        rutGon();
    }

    void xuat() const {
        if (mau == 1) cout << tu;
        else cout << tu << "/" << mau;
    }

    // +
    PhanSo operator+(const PhanSo& b) const {
        return PhanSo(tu * b.mau + b.tu * mau, mau * b.mau);
    }

    // -
    PhanSo operator-(const PhanSo& b) const {
        return PhanSo(tu * b.mau - b.tu * mau, mau * b.mau);
    }

    // *
    PhanSo operator*(const PhanSo& b) const {
        return PhanSo(tu * b.tu, mau * b.mau);
    }

    // /
    PhanSo operator/(const PhanSo& b) const {
        return PhanSo(tu * b.mau, mau * b.tu);
    }

    // <
    bool operator<(const PhanSo& b) const {
        return tu * b.mau < b.tu * mau;
    }

    // ==
    bool operator==(const PhanSo& b) const {
        return tu == b.tu && mau == b.mau;
    }
};

int main() {
    int n;
    cout << "Nhap so phan so: ";
    cin >> n;

    PhanSo ds[100];

    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so " << i + 1 << ": ";
        ds[i].nhap();
    }

    cout << "\nDanh sach:\n";
    for (int i = 0; i < n; i++) {
        ds[i].xuat();
        cout << " ";
    }

    sort(ds, ds + n);

    cout << "\n\nSau khi sap xep:\n";
    for (int i = 0; i < n; i++) {
        ds[i].xuat();
        cout << " ";
    }

    return 0;
}