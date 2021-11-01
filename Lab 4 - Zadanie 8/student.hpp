#ifndef LAB_4___ZADANIE_8_STUDENT_HPP
#define LAB_4___ZADANIE_8_STUDENT_HPP

#include <string>

class Student {
public:
    void wczytaj();
    void poprawnchOdp();
    void setImie(std::string i);
    void setNazwisko(std::string n);
    void setNumerAlbumu(int na);
    void setIloscPytan(int p);
    void setIloscPoprawnych(int pp);
    std::string getImie();
    std::string getNazwisko();
    int getNumerAlbumu();
    int getIloscPytan();
    int getIloscPoprawnych();

private:
    std::string imie;
    std::string nazwisko;
    int numerAlbumu;
    int iloscPytan;
    int iloscPoprawnych;
};


#endif //LAB_4___ZADANIE_8_STUDENT_HPP
