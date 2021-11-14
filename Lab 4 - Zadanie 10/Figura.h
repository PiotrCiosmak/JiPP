#ifndef LAB_4___ZADANIE_10_FIGURA_H
#define LAB_4___ZADANIE_10_FIGURA_H
#include "Punkt.h"

class Figura {
public:
    Figura(int liczbaW);
    int liczbaWierzcholkow;
    Punkt* tabP=new Punkt[liczbaWierzcholkow];
};


#endif //LAB_4___ZADANIE_10_FIGURA_H
