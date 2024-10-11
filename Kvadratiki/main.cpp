#include <iostream>
#include "Square.h"
#include "Circle.h"
#include "SquareCircle.h"
using namespace std;

int main()
{
    double Radius, Square;

    cout << "Enter the circle radius: ";
    cin >> Radius;

    cout << "Enter the square length: ";
    cin >> Square;

    SquareCircle squareCircle(Radius, Square); 

    if (squareCircle.fitsInSquare()) {
        cout << "|The circle fits =) " << std::endl;
    }
    else {
        cout << "|The circle not fit =( " << std::endl;
    }

    return 0;

   
}