#ifndef LAB_6___ZADANIE_2_VECTOR_HPP
#define LAB_6___ZADANIE_2_VECTOR_HPP

#include <iostream>
#include <string>

class Vector
{
    friend Vector operator&(const double &lhs, const Vector &rhs);

    friend std::ostream &operator<<(std::ostream &lhs, Vector &rhs);

private:
    double x, y;

public:
    Vector();

    Vector(double x, double y);

    double length();

    void pokaz();

    Vector operator+(const Vector &rhs) const
    {
        return {x + rhs.x, y + rhs.y};
    }

    Vector &operator+=(const Vector &rhs)
    {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }

    Vector operator-(const Vector &rhs)
    {
        return {x - rhs.x, y - rhs.y};
    }

    double operator*(const Vector &rhs) const
    {
        return (x * rhs.x + y * rhs.y);
    }

    Vector operator&(const double &liczba) const
    {
        return {x * liczba, y * liczba};
    }

    void operator==(const Vector &rhs)
    {
        if (x == rhs.x && y == rhs.y)
        {
            std::cout << "Sa takie same\n";
        }
        else
        {
            std::cout << "Nie sa taie same\n";
        }
    }

    Vector operator!()
    {
        return {-x, -y};
    }
};

#endif //LAB_6___ZADANIE_2_VECTOR_HPP
