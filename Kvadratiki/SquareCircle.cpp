#include "SquareCircle.h"

// Конструктор
SquareCircle::SquareCircle(double radius, double side)
    : circle(radius), square(side) {}

bool SquareCircle::fitsInSquare() const {
    return (circle.getRadius() * 2) <= square.getSide(); 
}
