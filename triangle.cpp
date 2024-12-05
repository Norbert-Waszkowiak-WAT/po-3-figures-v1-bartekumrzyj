#include <iostream> 
#include <cmath> 
#include "point.h" 
#include "triangle.h" 
Triangle::Triangle() : a(), b(), c() {}; 
Triangle::Triangle(Point a, Point b, Point c) : a(a), b(b), c(c) {}; 
Triangle::Triangle(const Triangle &other) : a(other.a), b(other.b), c(other.c) {}; 

bool Triangle::equals(const Triangle &other) {    
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c); } 
void Triangle::flip() {
        a.flip();   
        b.flip();    
        c.flip(); 
        } 
void Triangle::move(double x, double y) {
        a.move(x, y);    
        b.move(x, y);    
        c.move(x, y);
         } 
double Triangle::getSurface() {    
    double side1 = sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));    
    double side2 = sqrt(pow(a.getX() - c.getX(), 2) + pow(a.getY() - c.getY(), 2));    
    double side3 = sqrt(pow(b.getX() - c.getX(), 2) + pow(b.getY() - c.getY(), 2));    
    double s = (side1 + side2 + side3) / 2; // półobwód
    return sqrt(s * (s - side1) * (s - side2) * (s - side3)); // wzór Herona
}
