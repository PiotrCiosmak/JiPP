#include <iostream>

using namespace std;

void wypisz(char tab[][15], int rozm_y, int rozm_x);

int main() {
    constexpr int liczba_wierszy{3};
    constexpr int liczba_kolumn{15};
    char tablica[liczba_wierszy][liczba_kolumn]{};

    char znak{'!'};

    for (int i = 0; i < liczba_wierszy; ++i)
        for (int j = 0; j < liczba_kolumn; ++j) {
            tablica[i][j] = znak++;
        }

    wypisz(tablica, liczba_wierszy, liczba_kolumn);
}

void wypisz(char tab[][15], int rozm_y, int rozm_x) {
    cout << "_______________________________\n";
    for (int y = 0; y < rozm_y; ++y) {
        for (int x = 0; x < rozm_x; ++x) {
            cout << "|" << tab[y][x];
        }
        cout << "|\n";
    }
    cout << "_______________________________\n";
}