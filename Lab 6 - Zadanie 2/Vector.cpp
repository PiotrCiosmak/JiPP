#include "Vector.hpp"
#include <math.h>

Vector::Vector()
{
}


Vector::Vector(double x, double y) : x(x), y(y)
{
}

double Vector::length()
{
    return sqrt(x * x + y * y);
}
void Vector::pokaz()
{
    std::cout << "[" << x << "," << y << "]\n";
}
