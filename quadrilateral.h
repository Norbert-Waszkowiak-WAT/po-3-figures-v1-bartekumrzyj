#ifndef UNTITLED_QUADRILATERAL_H
#define UNTITLED_QUADRILATERAL_H
#include <string>
#include "point.h"
using namespace std;

class Quadrilateral {
private:
    Point a;
    Point b;
    Point c;
    Point d;
public:
    Quadrilateral(Point a, Point b, Point c, Point d);
    Quadrilateral(const Quadrilateral &other);
    bool equals(Quadrilateral &other);
    string toString();
    void flip();
    void move(double p, double g);
    double getSurface();
};
#endif