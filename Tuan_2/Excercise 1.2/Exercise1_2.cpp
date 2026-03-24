#include <iostream>
using namespace std;

int main() {
    // 1. Số giây trong 42 phút 42 giây
    int minutes = 42;
    int seconds_part = 42;
    int total_seconds = minutes * 60 + seconds_part;
    cout << "1. Tong so giay: " << total_seconds << " giay" << endl;

    // 2. Doi 10 km sang dam (miles) - 1 mile = 1.61 km
    double kilometers = 10.0;
    double miles = kilometers / 1.61;
    cout << "2. 10km bang: " << miles << " dam" << endl;

    // 3. Tinh Pace trung binh va Van toc trung binh (mph)
    double total_minutes = 42.0 + (42.0 / 60.0);
    double pace_minutes = total_minutes / miles;
    
    int p_min = (int)pace_minutes; 
    int p_sec = (int)((pace_minutes - p_min) * 60);
    
    double total_hours = total_minutes / 60.0;
    double mph = miles / total_hours;

    cout << "3. Pace trung binh: " << p_min << " phut " << p_sec << " giay tren dam" << endl;
    cout << "   Van toc trung binh: " << mph << " dam/gio" << endl;

    return 0;
}