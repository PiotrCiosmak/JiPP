#include <iostream>

using namespace std;

void sortowanie(double *x, double *y);

int main() {
    double a{20}, b{-20.3};
    sortowanie(&a, &b);
}
void sortowanie(double *x, double *y)
{
    if (*x>=*y)
    {
        cout<<"1. "<<*x<<endl;
        cout<<"2. "<<*y<<endl;
    }
    else
    {
        cout<<"1. "<<*y<<endl;
        cout<<"2. "<<*x<<endl;
    }
}