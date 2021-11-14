#include <iostream>
#include "pojazd.hpp"

using namespace std;

int main()
{
    pojazd Maluch("RT42424","Maluch",4,"Piotr Ciosmak","Fiat","Coupe");
    Maluch.pokaz();
    Maluch.wsadz(1,"Julia");
    Maluch.pokaz();
    cout<<endl;
    Maluch.wypiszWO();
    cout<<endl;
    Maluch.zaktualizujWO(5);
    cout<<endl;
    Maluch.wypiszWO();

}