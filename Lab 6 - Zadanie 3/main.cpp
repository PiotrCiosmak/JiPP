#include <iostream>
#include "Traingle.hpp"

using namespace std;

void showTriangleData(Traingle triangle)
{
    triangle.display();
}
void showTriangleData(Traingle &triangle)
{
    triangle.display();
}
void showTriangleData(Traingle *triangle)
{
    (*triangle).display();
}

int main()
{
    Node a(1,2), b(5,8), c(1, 16);
    Traingle traingle(a, b, c, "First Triangle");

    traingle.display();
    // cout << traingle << endl; Błąd

    cout << "Distance between first and second point is " << traingle.distance(0,1) << endl<<endl<<endl;

    showTriangleData(&traingle);
    //showTriangleData(traingle);
    //To nie jest mozliwe bo kompilator nie wie którą funkcje wykonać czy 1 czy 2 ponieważ rożnica polega tylko na tym czy obiekt jest odbierany jako referencja czy jako kopia


}
