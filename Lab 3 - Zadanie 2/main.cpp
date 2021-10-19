#include <iostream>
#include <ctime>

using namespace std;

int losuj_z_przedzialu(int poczatek, int koniec);

int main() {
    cout<<"Losowanie liczby z podanego przedzialu\n";

    int poczatek_przedzialu;
    cout<<"Podaj poczatek przedzialu:";
    cin>>poczatek_przedzialu;

    int koniec_przedzialu;
    cout<<"Podaj koniec przedzialu:";
    cin>>koniec_przedzialu;

    cout<<"Rozpoczecie losowania\n";
    cout<<"Wylosowana zostala liczba : "<<losuj_z_przedzialu(poczatek_przedzialu,koniec_przedzialu);
}

int losuj_z_przedzialu(int poczatek, int koniec)
{
    srand(time(NULL));
    return (rand()%koniec+poczatek);
}