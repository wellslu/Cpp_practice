#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct Point {
    int x;
    int y;
    double DistOri() {
        return sqrt(pow(x, 2) + pow(y, 2));
    }
    void reflect();
};

void Point::reflect() {
    int temp = x;
    x = y;
    y = temp;
}

typedef double Dollar;

Point Vector(Point A, Point B) {
    Point vecXY;
    vecXY.x = B.x - A.x;
    vecXY.y = B.y - A.y;
    return vecXY;
}

void reflect(Point& a) {
    int temp = a.x;
    a.x = a.y;
    a.y = temp;
}

int main() {
    Point a = {3, 4}, b = {10, 20};
    Point vecAB = Vector(a, b);
    cout << vecAB.x << ", " << vecAB.y << endl;
    reflect(vecAB);
    cout << vecAB.x << ", " << vecAB.y << endl;
    vecAB.reflect();
    cout << vecAB.x << ", " << vecAB.y << endl;
    cout << vecAB.DistOri() << endl;

    Dollar nt=50;
    Dollar us;
    us = nt * 30;
    cout << "NT: " << nt  << " => " << us << endl;

    char c[10] = "12345";
    size_t d = strlen(c);
    cout << d << endl;
}