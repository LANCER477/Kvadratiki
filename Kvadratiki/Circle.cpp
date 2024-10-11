#include "Circle.h"


Circle::Circle(double r) : radius(r) {}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() const {
    return radius;
}
