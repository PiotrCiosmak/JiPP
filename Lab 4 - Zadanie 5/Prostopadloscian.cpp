#include "Prostopadloscian.hpp"

double Prostopadloscian::field()
{
    return 2*(a*b+b*h+a*h);
}

Prostopadloscian::Prostopadloscian(double bok1, double bok2, double wysokosc)
{
    a=bok1;
    b=bok2;
    h=wysokosc;
}