#ifndef UNTITLED_TRIANGLE_H
#define UNTITLED_TRIANGLE_H
#include <string>
#include "point.h"
using namespace std;

class Triangle {
private:
    Point a;
    Point b;
    Point c;
public:
    Triangle(Point a, Point b, Point c);
    Triangle(const Triangle &other);
    bool equals(Triangle &other);
    string toString();
    void flip();
    void move(double p, double d);
    double getSurface();
};
#endif