#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include "point.h"
 class Triangle {
    private:
        Point a, b, c;
    public:
        Triangle();
        Triangle(Point a, Point b, Point c);
        Triangle(const Triangle &other);
        bool equals(const Triangle &other);
        void flip();
        void move(double x, double y);
        std::string toString();
        double getSurface();
 };
 #endif