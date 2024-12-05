#ifndef POINT_H
#define POINT_H
#include <string>
#include <iostream>

class Point{
private:
    double x;
    double y;

public:
    Point():x(0),y(0){};
    Point(double x, double y);
    bool equals(const Point& other)const;
    double getX();
    double getY();
    void flip();
    void move(double dx, double dy);
    std::string toString();
};
#endif