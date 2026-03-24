#include <iostream>
#include <ctime> // Thư viện xử lý thời gian

using namespace std;

int main() {
    long total_seconds = time(0);

    long seconds_in_day = 24 * 60 * 60;
    
    long days_since_epoch = total_seconds / seconds_in_day;

    long remaining_seconds = total_seconds % seconds_in_day;

    int current_hour = remaining_seconds / 3600;
    int current_minute = (remaining_seconds % 3600) / 60;
    int current_second = remaining_seconds % 60;

    cout << "--- Thong ke thoi gian tu Epoch ---" << endl;
    cout << "So ngay da troi qua: " << days_since_epoch << " ngay" << endl;
    cout << "Gio hien tai (GMT): " << current_hour << ":" 
         << current_minute << ":" << current_second << endl;

    return 0;
}