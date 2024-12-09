#include "point.h"
#include <sstream>
#include <iomanip>
using namespace std;

Point::Point(double x, double y): x(x), y(y) {};

Point::Point(const Point &other): x(other.x), y(other.y){};

const double Point::getX() const {
    return x;
};

const double Point::getY() const {
    return y;
};
const bool Point::equals(Point &other) const {
    return other.x == x && other.y==y;
};

std::string Point::toString(){
    std::ostringstream oss;
    oss << fixed << setprecision(1);
    oss << "Point(" << x << ", " << y << ")";
    return oss.str();
};

void Point::flip(){
    x = -x;
    y = -y;
};

void Point::move (double a, double b) {
    x=x+a;
    y=y+b;
};