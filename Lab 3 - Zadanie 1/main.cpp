#include <iostream>
#include "obliczenia.hpp"

using namespace std;

int main() {
    cout << "Pole kwadratu o boku dlugosci 5 = " << oblicz_pole(5) << endl;
    cout << "Pole prostokata o bokach dlugosci 10.5 i 3.4 = " << oblicz_pole(10.5, 3.4) << endl;
    cout << "Pole trapezu o podstawach dlugosci 4.1, 8.7 i wysokosci 20 = " << oblicz_pole(4.1, 8.7, 20) << endl;
    return 0;
}
