#include "Vector_U.hpp"

Vector_U::Vector_U()
{

}
Vector_U::Vector_U(double x, double y, double xi, double yi) : x(x), y(y), xi(xi), yi(yi)
{

}

void Vector_U::pokaz()
{
    std::cout << "[" << x << " " << std::showpos << xi << "i," << std::noshowpos << y << " " << std::showpos << yi
              << std::noshowpos << "i]\n";
}