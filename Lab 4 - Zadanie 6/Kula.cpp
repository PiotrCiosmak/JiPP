#include "Kula.h"
#include <iostream>

using namespace std;

Kula::Kula(int promien)
{
    r=promien;
}
double Kula::objetosc()
{
    return 4/3*3.14*r*r*r;
}

void Kula::wczytaj()
{
    cout<<"Podaj promien kuli:";
    cin>>r;
}

double Kula::getR()
{
    return r;
}