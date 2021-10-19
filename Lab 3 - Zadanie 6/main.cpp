#include <iostream>

using namespace std;

void wypisz(int rozmiar, int*wsk);

int main() {
    constexpr int ilosc_elementow{10};
    int oceny[ilosc_elementow]{1,2,3,4,-6,-6,-5,23,323,32};
    wypisz(ilosc_elementow,oceny);

}

void wypisz(int rozmiar, int*wsk)
{
    for (int i = 0; i < rozmiar; ++i,++wsk) {
        if (*wsk>0)
        {
            cout<<"["<<i<<"] = "<<*wsk<<endl;
        }
    }
}
