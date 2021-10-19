#include <iostream>
#include <ctime>

using namespace std;

int uzupelnij_tablice_losowo(int* wsk_do_tablicy, int rozmiar_tablicy, int poczatek, int koniec);
int najwiekszy_element_w_tablicy(int* wsk_do_tablicy,)
int main() {
    constexpr int rozmiar{20};
    int* wsk_losowej_tablicy{new int[rozmiar]};
    uzupelnij_tablice_losowo(wsk_losowej_tablicy,rozmiar,1,100);


}

int uzupelnij_tablice_losowo(int* wsk_do_tablicy, int rozmiar_tablicy, int poczatek, int koniec)
{
    srand(time(NULL));
    for (int i = 0; i < rozmiar_tablicy; ++i) {
        *wsk_do_tablicy=(rand() % koniec + poczatek);
    }
}
