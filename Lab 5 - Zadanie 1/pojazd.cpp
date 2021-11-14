#include "pojazd.hpp"
#include <iostream>

using namespace std;

int pojazd::zainstalowaWersjaOprogramowania=1;

void pojazd::wypiszWO()
{
    cout<<"Aktualna wersja: "<<zainstalowaWersjaOprogramowania;
}

void pojazd::zaktualizujWO(int nowa)
{
    zainstalowaWersjaOprogramowania=nowa;
}

int pojazd::opublikujNWO(int nowa)
{
    zainstalowaWersjaOprogramowania=nowa;
    cout<<"Aktualna wersja (po aktualizacji): "<<zainstalowaWersjaOprogramowania;
    return zainstalowaWersjaOprogramowania;
}

pojazd::pojazd(string nrR, string naz, unsigned short int iloscMiej, string imieNaz, string mar, string typ)
{
    nrRejestracyjny = nrR;
    nazwa = naz;
    iloscMiejsc = iloscMiej;
    ImieNazwisko = new string[iloscMiejsc];
    if (!(imieNaz.empty()))
    {
        ImieNazwisko[0] = imieNaz;
        for (int i = 1; i < iloscMiejsc; ++i)
        {
            ImieNazwisko[i] = "puste";
        }
    }
    else
    {
        for (int i = 0; i < iloscMiejsc; ++i)
        {
            ImieNazwisko[i] = "puste";
        }
    }
    marka = mar;
    typNadwozia = typ;
}

void pojazd::pokaz()
{
    cout << "---POJAZ---\n";
    cout << "Numer rejestracyjny:" << nrRejestracyjny << "\n";
    cout << "Nazwa:" << nazwa << "\n";
    cout << "Ilosc miejsc:" << iloscMiejsc << "\n";
    cout << "W srodku jest:\n";
    for (int i = 0; i < iloscMiejsc; ++i)
    {
        cout<<ImieNazwisko[i]<<endl;
    }
    cout << "Marka:" << marka << "\n";
    cout << "Typ: " << typNadwozia << "\n";
}

void pojazd::wsadz(unsigned short int nr, string nowaOsoba)
{
    if (nr < iloscMiejsc)
    {
        ImieNazwisko[nr] = nowaOsoba;
    } else
    {
        cout << "Nie ma takiego miejsca w tym pojezdzie\n";
    }
}

pojazd::pojazd(pojazd &pojazdDoSkopiowania)
{
    nrRejestracyjny=pojazdDoSkopiowania.nrRejestracyjny;
    nazwa=pojazdDoSkopiowania.nazwa;
    iloscMiejsc=pojazdDoSkopiowania.iloscMiejsc;
    ImieNazwisko=new string[iloscMiejsc];
    for (int i = 0; i < iloscMiejsc; ++i)
    {
        ImieNazwisko[i]=pojazdDoSkopiowania.ImieNazwisko[i];
    }
    marka=pojazdDoSkopiowania.marka;
    typNadwozia=pojazdDoSkopiowania.typNadwozia;
}

std::string pojazd::nazwaGet()
{
    return nazwa;
}
std::string pojazd::nrGet()
{
    return nrRejestracyjny;
}
std::string pojazd::markaGet()
{
    return marka;
}
std::string pojazd::typGet()
{
    return typNadwozia;
}

void pojazd::nazwaSet(std::string nowaNazwa)
{
    nazwa=nowaNazwa;
}
void pojazd::nrSet(std::string nowyNumerRej)
{
    nrRejestracyjny=nowyNumerRej;
}

pojazd::~pojazd()
{
    delete[] ImieNazwisko;
}