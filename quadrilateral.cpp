#include <sstream>
#include <iomanip>
#include "point.h"
#include "line.h"
#include "quadrilateral.h"
#include <cmath>
using namespace std;

Quadrilateral::Quadrilateral(Point a, Point b, Point c, Point d): a(a), b(b), c(c), d(d) {};

Quadrilateral::Quadrilateral(const Quadrilateral &other): a(other.a), b(other.b), c(other.c), d(other.d){};

bool Quadrilateral::equals(Quadrilateral &other) {
    return a.equals(other.a) && b.equals(other.b) && c.equals(other.c) && d.equals(other.d);
};

string Quadrilateral::toString(){
    return "Quadrilateral("+a.toString()+ ", " + b.toString() + ", " + c.toString() + ", " + d.toString()+")";
};

void Quadrilateral::flip(){
  a.flip();
  b.flip();
  c.flip();  
  d.flip();
};

void Quadrilateral::move(double p, double g){
a.move(p, g);
b.move(p, g);
c.move(p, g);
d.move(p, g);
};

double Quadrilateral::getSurface(){
double pole;
pole=0.5*abs(a.getX()*(b.getY()-d.getY())+b.getX()*(c.getY()-a.getY())+c.getX()*(d.getY()-b.getY())+d.getX()*(a.getY()-c.getY()));
return pole;
};