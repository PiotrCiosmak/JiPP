#include "student.hpp"
#include <iostream>

using namespace std;

void Student::wczytaj()
{
    cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj nazwisko:";
    cin>>nazwisko;
    cout<<"Podaj numer albumu:";
    cin>>numerAlbumu;
    cout<<"Podaj ilosc pytan:";
    cin>>iloscPytan;
    cout<<"Na ile odpowiedziales poprawnie:";
    cin>>iloscPoprawnych;
}

void Student::poprawnchOdp()
{
    cout<<imie<<" "<<nazwisko<<" uzyskal: "<<iloscPoprawnych*1.0/iloscPytan*100<<"%\n";
}

void Student::setImie(string i)
{
    imie=i;
}
void Student::setNazwisko(string n)
{
    nazwisko=n;
}
void Student::setNumerAlbumu(int na)
{
    numerAlbumu=na;
}
void Student::setIloscPytan(int p)
{
    iloscPytan=p;
}
void Student::setIloscPoprawnych(int pp)
{
    iloscPoprawnych=pp;
}
string Student::getImie()
{
    return imie;
}
string Student::getNazwisko()
{
    return nazwisko
}
int Student::getNumerAlbumu()
{
    return numerAlbumu;
}
int Student::getIloscPytan()
{
    return iloscPytan;
}
int Student::getIloscPoprawnych()
{
    return iloscPoprawnych;
}