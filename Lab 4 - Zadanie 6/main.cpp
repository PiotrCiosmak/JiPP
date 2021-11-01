#include <iostream>
#include "Kula.h"

using namespace std;

int main()
{
    Kula ziemia(10);
    ziemia.wczytaj();
    cout<<"Ziemia ma: "<<ziemia.objetosc();
}
