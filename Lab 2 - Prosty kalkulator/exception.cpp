#include "exception.hpp"
#include <iostream>

using namespace std;

void help() {
    cout << endl << R"(Instrukcja obslugi programu.
1. Aby dodac dwie liczby wprowadz nastepujace parametry: |add| |liczba 1| |liczba 2|
2. Aby odjac dwie liczby wprowadz nastepujace parametry: |subtract| |liczba 1| |liczba 2|
3. Aby obliczyc objetosc graniastoslupa prostego o podstawie trapezu wprowadz nastepujace parametry: |volume|
|dlugosc dluzszego boku podstawy| |dlugosc krotszego boku podstawy| |wysokosc trapeza ktory jest w podstawie|
|wysokosc calej bryly|
4. Aby wywolac instrukcje obslugi programu wprowadz nastepujacy parametr: |help|)";
}

void error_par() {
    cout << endl << R"(Program zostal uruchomiony z blednymi parametrami.
Jesli potrzebujesz pomocy uruchom program z nastepujacym parametrem: |help|)";
}