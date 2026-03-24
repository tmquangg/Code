#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Câu 1: Thể tích hình cầu bán kính r = 5
    double r = 5;
    double pi = 3.14159;
    double volume = (4.0/3.0) * pi * r * r * r;
    cout << "1. The tich hinh cau: " << fixed << setprecision(2) << volume << endl;

    // Câu 2: Tổng chi phí cho 60 cuốn sách
    double cover_price = 24.95;
    double discount = 0.40;
    double discounted_price = cover_price * (1 - discount);
    
    int total_books = 60;
    double shipping = 3.0 + (total_books - 1) * 0.75;
    double total_cost = (discounted_price * total_books) + shipping;
    cout << "2. Tong chi phi ban buon: $" << total_cost << endl;

    // Câu 3: Thời gian về nhà ăn sáng
    int start_time_minutes = 6 * 60 + 52;
    int total_run_seconds = (8*60 + 15) + 3*(7*60 + 12) + (8*60 + 15);
    
    int total_run_minutes = total_run_seconds / 60;
    int end_time_minutes = start_time_minutes + total_run_minutes;
    
    int hour = (end_time_minutes / 60) % 12;
    int minute = end_time_minutes % 60;
    cout << "3. Thoi gian ve den nha: " << hour << ":" << minute << " AM" << endl;

    return 0;
}