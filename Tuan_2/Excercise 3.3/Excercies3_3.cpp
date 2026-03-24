#include <iostream>
#include <string>

using namespace std;

// Hàm vẽ dòng ngang
void print_horizontal_line() {
    cout << "+ - - - - + - - - - +" << endl;
}

// Hàm vẽ các cột dọc
void print_vertical_lines() {
    for (int i = 0; i < 4; i++) {
        cout << "|         |         |" << endl;
    }
}

// Hàm vẽ lưới 2x2 (Câu 1)
void draw_2x2_grid() {
    print_horizontal_line();
    print_vertical_lines();
    print_horizontal_line();
    print_vertical_lines();
    print_horizontal_line();
}

int main() {
    cout << "Cau 1: Ve luoi 2x2" << endl;
    draw_2x2_grid();
    
    return 0;
}