#include <iostream>

using namespace std;

double dzielenie(int a, int b);

struct Tblad_wynik_jest_ulamkiem {
};

int main() {
    int a, b;
    cout << "Podaj dwie liczby:";
    cin >> a;
    cin >> b;
    try {
        cout << dzielenie(a, b);
    }
    catch (Tblad_wynik_jest_ulamkiem) {
        cout << "Sytuacja bledu - podczas dzielenia powstal ulamek!\n";

    }
}

double dzielenie(int a, int b) {
    cout << "Dzielimy b przez a\n";
    if (b * 1.0 / a == b / a) {
        return b * 1.0 / a;
    } else {
        Tblad_wynik_jest_ulamkiem ulamek;
        throw ulamek;
    }
}