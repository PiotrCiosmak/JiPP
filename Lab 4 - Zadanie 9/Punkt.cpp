#include "Punkt.hpp"
#include <math.h>

Punkt::Punkt(int& fX, int& fY)
:x{fX},y{fY}
{

}

int Punkt::odleglosc()
{
    return abs(x-y);
}
