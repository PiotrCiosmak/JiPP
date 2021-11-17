#ifndef LAB_6___ZADANIE_2_VECTOR_U_HPP
#define LAB_6___ZADANIE_2_VECTOR_U_HPP

#include <iostream>

class Vector_U
{
private:
    double x, y;
    double xi, yi;

public:
    Vector_U();

    Vector_U(double x, double y, double xi, double yi);

    void pokaz();

    Vector_U operator+(const Vector_U &rhs) const
    {
        return {x + rhs.x, y + rhs.y, xi + rhs.xi, yi + rhs.yi};
    }

    Vector_U &operator+=(const Vector_U &rhs)
    {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        this->xi = this->xi + rhs.xi;
        this->yi = this->yi + rhs.yi;
        return *this;
    }

    Vector_U operator-(const Vector_U &rhs)
    {
        return {x - rhs.x, y - rhs.y, xi - rhs.xi, yi - rhs.yi};
    }

    double operator*(const Vector_U &rhs)
    {
        return (x * rhs.x + y * rhs.y, xi * rhs.xi, yi * rhs.yi);
    }

    Vector_U operator&(const double &liczba) const
    {
        return {x * liczba, y * liczba, xi * liczba, yi * liczba};
    }

    void operator==(const Vector_U &rhs)
    {
        if (x == rhs.x && y == rhs.y && xi == rhs.xi && yi == rhs.yi)
        {
            std::cout << "Sa takie same\n";
        }
        else
        {
            std::cout << "Nie sa taie same\n";
        }
    }

    Vector_U operator!()
    {
        return {-x, -y, -xi, -yi};
    }
};

#endif //LAB_6___ZADANIE_2_VECTOR_U_HPP