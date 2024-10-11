#pragma once
#include "Circle.h"
#include "Square.h"

class SquareCircle {
private:
    Circle circle; 
    Square square; 

public:
   
    SquareCircle(double radius, double side);
    bool fitsInSquare() const;
};
