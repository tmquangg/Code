#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

struct Rectangle {
    Point corner; // trai duoi
    double width, height;
};

class Circle {
public:
    Point center;
    double radius;

    Circle(double x, double y, double r) {
        center.x = x;
        center.y = y;
        radius = r;
    }
};

bool point_in_circle(Circle c, Point p) {
    double dist = sqrt(pow(p.x - c.center.x, 2) + pow(p.y - c.center.y, 2));
    return dist <= c.radius;
}

bool rect_in_circle(Circle c, Rectangle r) {
    Point p1 = {r.corner.x, r.corner.y};
    Point p2 = {r.corner.x + r.width, r.corner.y};
    Point p3 = {r.corner.x, r.corner.y + r.height};
    Point p4 = {r.corner.x + r.width, r.corner.y + r.height};

    return point_in_circle(c, p1) && point_in_circle(c, p2) && 
           point_in_circle(c, p3) && point_in_circle(c, p4);
}

bool rect_circle_overlap(Circle c, Rectangle r) {
    Point p1 = {r.corner.x, r.corner.y};
    Point p2 = {r.corner.x + r.width, r.corner.y};
    Point p3 = {r.corner.x, r.corner.y + r.height};
    Point p4 = {r.corner.x + r.width, r.corner.y + r.height};

    return point_in_circle(c, p1) || point_in_circle(c, p2) || 
           point_in_circle(c, p3) || point_in_circle(c, p4);
}

int main() {
    Circle my_circle(150, 100, 75);

    Point p = {160, 110};
    cout << "Diem nam trong hinh tron: " << (point_in_circle(my_circle, p) ? "True" : "False") << endl;

    Rectangle rect = {{140, 90}, 20, 20};
    cout << "HCN nam hoan toan trong tron: " << (rect_in_circle(my_circle, rect) ? "True" : "False") << endl;

    return 0;
}