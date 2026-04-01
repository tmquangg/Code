#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x, y;

    void hienThi() {
        cout << "Toa do: (" << x << ", " << y << ")" << endl;
    }

    double khoangCachO() {
        return sqrt(x*x + y*y);
    }

    double khoangCachDen(Point other) {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }
};

int main() {
    Point A = {3, 4};
    A.hienThi();

    Point B;
    cout << "Nhap x, y cho B: ";
    cin >> B.x >> B.y;

    Point C = {-B.x, -B.y};
    cout << "Khoang cach B den O: " << B.khoangCachO() << endl;
    cout << "Khoang cach A den B: " << A.khoangCachDen(B) << endl;
    return 0;
}