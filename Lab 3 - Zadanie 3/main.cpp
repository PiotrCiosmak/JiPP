#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int losuj_z_przedzialu(int poczatek, int koniec);

void wypelnij(int *wsk_tablica, int rozmiar_tablica);

int max_w_tablicy(int *wsk_tablica, int rozmiar_tablica);

int main() {
    int rozmiar;
    cout << "Podaj rozmiar tablicy:";
    cin >> rozmiar;
    int *wsk_tab = new int[rozmiar];

    wypelnij(wsk_tab, rozmiar);

    cout << "Najwiekszy element w tablicy to = " << max_w_tablicy(wsk_tab, rozmiar) << endl;
}

int losuj_z_przedzialu(int poczatek, int koniec) {
    srand(time(NULL));
    return (rand() % koniec + poczatek);
}

void wypelnij(int *wsk_tablica, int rozmiar_tablica) {
    for (int i = 0; i < rozmiar_tablica; ++i, ++wsk_tablica) {
        *wsk_tablica = losuj_z_przedzialu(1, 100);
    }
}

int max_w_tablicy(int *wsk_tablica, int rozmiar_tablica) {
    int max{INT_MIN};
    for (int i = 0; i < rozmiar_tablica; ++i, ++wsk_tablica) {
        if ((*wsk_tablica) > max) {
            max = *wsk_tablica;
        }
    }
    return max;
}