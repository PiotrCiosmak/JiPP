#ifndef LAB_4___ZADANIE_5_PROSTOPADLOSCIAN_HPP
#define LAB_4___ZADANIE_5_PROSTOPADLOSCIAN_HPP

class Prostopadloscian {
public:
    Prostopadloscian(double bok1,double bok2, double wysokosc);
    double field();
    void setA(double a);
    void setB(double b);
    void setH(double h);
    double getA();
    double getB();
    double getH();
private:
    double a,b,h;
};


#endif //LAB_4___ZADANIE_5_PROSTOPADLOSCIAN_HPP
