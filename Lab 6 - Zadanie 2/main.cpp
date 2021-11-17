#include <iostream>
#include <string>
#include "Vector.hpp"
#include "Vector_U.hpp"

using namespace std;

Vector operator&(const double &lhs, const Vector &rhs)
{
    return {rhs&lhs};
}

ostream&operator<<(ostream &lhs,Vector& rhs)
{
    lhs<<rhs.x<<"|"<<rhs.y<<endl;
    return lhs;
}

int main()
{
    Vector v1(5, 10), v2(5, 10);
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);
    v3.pokaz();
    v3 = v1 - v2;
    v3.pokaz();
    double x = v1 * v2;
    cout << x;
    cout<<endl<<endl;

    Vector_U v8(5,8,1,-10);
    v8.pokaz();
    cout<<endl<<endl;

    v3=v1&5;
    v3.pokaz();
    cout<<endl<<endl;

    v3=5&v1;
    v3.pokaz();
    cout<<endl<<endl;

    cout<<v1;
}
