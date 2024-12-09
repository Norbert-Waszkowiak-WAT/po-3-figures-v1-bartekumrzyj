#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H
#include <string>
using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point(double x, double y);
    Point(const Point &other);
    const bool equals(Point &other) const;
    string toString();
    const double getX() const;
    const double getY() const;
    void flip();
    void move(double a, double b);
};
#endif