#ifndef LAB_5_ZADANIE_2_POJAZD_HPP
#define LAB_5_ZADANIE_2_POJAZD_HPP

#include <string>

class pojazd
{
public:

    void wypiszWO();
    void zaktualizujWO(int nowa);

    static int opublikujNWO(int nowa);

    pojazd(std::string nrR, std::string naz, unsigned short int iloscMiej, std::string imieNaz, std::string mar,
           std::string typ);

    void pokaz();

    void wsadz(unsigned short int nr, std::string nowaOsoba);

    pojazd(pojazd &pojazdDoSkopiowania);

    std::string nazwaGet();
    std::string nrGet();
    std::string markaGet();
    std::string typGet();

    void nazwaSet(std::string nowaNazwa);
    void nrSet(std::string nowyNumerRej);

    ~pojazd();

private:
    static int zainstalowaWersjaOprogramowania;
    std::string nrRejestracyjny;
    std::string nazwa;
    unsigned short int iloscMiejsc;
    std::string *ImieNazwisko;
    std::string marka;
    std::string typNadwozia;
};

#endif //LAB_5_ZADANIE_2_POJAZD_HPP