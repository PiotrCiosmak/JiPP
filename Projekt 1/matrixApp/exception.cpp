#include <iostream>
#include "exception.hpp"

using namespace std;

void help()
{
    cout << endl << R"(Instrukcja obslugi programu.
0. Wczytywanie macierzy jest proste. Najpierw podaj ilosc wierszy i kolumn macierzy A.
   Nastepnie wczytaj dane do macierzy A.
   Jesli bedzie taka potrzeba podaj ilosc kolumn macierzy B.
   Jesli bedzie taka potrzeba wczytaj dane do macirzy B.
   Po uruchomieniu programu z odpowiednim parametrem. Program bedzie Cie informowal co nalezy wprowadzic z klawiatury.
1. Aby dodac dwie macierze wprowadz nastepujacy parametr: |addMatrix|
2. Aby odjac dwie macierze wprowadz nastepujacy parametr: |subtractMatrix|
3. Aby pomnozyc dwie macierze przez siebie wprowadz nastepujacy parametr: |multiplyMatrix|
4. Aby pomnozyc dwie macierze przez skalar wprowadz nastepujacy parametr: |multiplyByScalar|
5. Aby transponowac macierz wprowadz nastepujacy parametr: |transpozeMatrix|
6. Aby podniesc macierz do wybranej potegi wprowadz nastepujace paramety: |powerMatrix| |wartosc potegi|
7. Aby obliczyc wyznacznik macierzy wprowadz nastepujacy parametr: |determinantMatrix|
8. Aby sprawdzic czy macierze jest diagonalna wprowadz nastepujacy parametr: |matrixIsDiagonal|
9. Aby zamienic dwie wartoscie miejscami wprowadz nastepujacy parametr: |swap|
10. Aby posortowac wybrany wiersz macierzy wprowadz nastepujacy parametr: |sortRow|
11. Aby posortowac wszystkie wierszy macierzy wprowadz nastepujacy parametr: |sortRowsInMatrix|
12. Aby wywolac instrukcje obslugi programu wprowadz nastepujacy parametr: |help|)";
}

void error_par()
{
    cout << endl << R"(Program zostal uruchomiony z blednymi parametrami.
Jesli potrzebujesz pomocy uruchom program z nastepujacym parametrem: |help|)";
}