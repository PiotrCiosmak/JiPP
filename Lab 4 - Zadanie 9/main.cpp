#include <iostream>
#include "Punkt.hpp"

using namespace std;

int main()
{
    int zmiannaA{10},zmiennaB{20};
    Punkt p1(zmiannaA,zmiennaB);
    cout<<"Odlegosc x od y:"<<p1.odleglosc();
}
