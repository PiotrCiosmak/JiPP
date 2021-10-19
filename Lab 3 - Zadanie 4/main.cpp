#include <iostream>

using namespace std;

void pokaz(int tab[], int rozmiar);

void odwroc(int *wsk_tab, int rozmiar);


int main() {
    constexpr int rozmiar_tablicy{10};
    int wyliczenie[rozmiar_tablicy]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    pokaz(wyliczenie, rozmiar_tablicy);

    cout << "\n\n\n";
    odwroc(wyliczenie, rozmiar_tablicy);

    pokaz(wyliczenie, rozmiar_tablicy);
}

void pokaz(int tab[], int rozmiar) {
    for (int i = 0; i < rozmiar; ++i) {
        cout << "[" << i << "] = " << tab[i] << endl;
    }
}

void odwroc(int *wsk_tab, int rozmiar) {
    int tmp;
    for (int i = 0; i < rozmiar / 2; ++i, ++wsk_tab) {
        tmp = *wsk_tab;
        *wsk_tab = *(wsk_tab + rozmiar - 1 - 2 * i);
        *(wsk_tab + rozmiar - 1 - 2 * i) = tmp;
    }
}