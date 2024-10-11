#pragma once
using namespace std;

class Square {

private:
     double side;

public:
    Square(double s) : side(s) {}

    double diametre() const {
        return 4 * side;
    }

    void setSide(double s) {
        side = s;
    }

    double getSide() const {
        return side;
    }
};


