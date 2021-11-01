#include "FunkcjaKwadratowa.hpp"
#include <iostream>

using namespace std;

void FunkcjaKwadratowa::wczytaj()
{
    cout<<"Podaj wspolczynnik przed x^2:";
    cin>>a;
    cout<<"Podaj wspolczynnik przed x:";
    cin>>b;
    cout<<"Podaj wyraz wolny:";
    cin>>c;
}

void FunkcjaKwadratowa::pokaz()
{
    cout<<"f(x)="<<a<<"x^2+"<<b<<"x+"<<c<<endl;
}

void FunkcjaKwadratowa::setA(int a)
{
    this->a=a;
}
void FunkcjaKwadratowa::setB(int b)
{
    this->b=b;
}
void FunkcjaKwadratowa::setC(int c)
{
    this->c=c;
}
double FunkcjaKwadratowa::getA()
{
    return a;
}
double FunkcjaKwadratowa::getB()
{
    return b;
}
double FunkcjaKwadratowa::getC()
{
    return c;
}