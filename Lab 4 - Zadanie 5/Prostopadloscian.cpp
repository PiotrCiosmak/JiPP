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

void Prostopadloscian::setA(double a)
{
    this->a=a;
}
void Prostopadloscian::setB(double b)
{
    this->b=b;
}
void Prostopadloscian::setH(double h)
{
    this->h=h;
}
double Prostopadloscian::getA()
{
    return a;
}
double Prostopadloscian::getB()
{
    return b;
}
double Prostopadloscian::getH()
{
    return h;
}