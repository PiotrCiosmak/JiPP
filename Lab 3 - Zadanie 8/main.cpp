#include <iostream>

using namespace std;

void funkcja(int x, int* w);

int main() {
    int zmienna;
    funkcja(10,&zmienna);
    cout<<zmienna<<endl;
}

void funkcja(int x, int* w)
{
    *w=x;
}