#ifndef UNTITLED_LINE_H
#define UNTITLED_LINE_H
#include <string>
#include "point.h"
using namespace std;

class Line {
private:
    Point a;
    Point b;
public:
    Line (Point a, Point b);
    Line (const Line &other);
    bool equals(Line &other);
    string toString();
    void flip();
    void move(double p, double d);
};
#endif