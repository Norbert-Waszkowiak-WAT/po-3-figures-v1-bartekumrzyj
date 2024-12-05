#include "point.h"
#include <sstream>
#include <iomanip>
Point::Point(double x, double y): x(x), y(y){}
double Point::getX(){
    return x;
}
double Point::getY(){
    return y;
}
bool Point::equals(const Point &other)const {
    return x==other.x && y==other.y;
}
std::string Point::toString(){
    std::ostringstream oss;
    oss<<std::fixed<<std::setprecision(1);
    oss<<"Point("<<x<<", "<<y<<")";
    return oss.str();
}
void Point::move(double x,double y){
    this->x+=x;
    this->y+=y;
}
void Point::flip(){
    x=x*(-1);
    y=y*(-1);
}