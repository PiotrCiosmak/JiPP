#include "Traingle.hpp"
#include <iostream>
#include "math.h"

using namespace std;

Traingle::Traingle() {}

Traingle::Traingle(Node a, Node b, Node c, string nazwa)
{
    one = a;
    two = b;
    tree = c;
    nazwa = nazwa;
}

void Traingle::display()
{
    cout << "Pierwszy wierzcholek: " << one.x << "," << one.y << endl;
    cout << "Drugi wierzcholek: " << two.x << "," << two.y << endl;
    cout << "Trzeci wierzcholek: " << tree.x << "," << tree.y << endl;
}

double Traingle::distance(int firstPointIndex, int secondPointIndex)
{
    if ((firstPointIndex == 1 && secondPointIndex == 2) || (firstPointIndex == 2 && secondPointIndex == 1))
    {
        return sqrt(pow(two.x - one.x, 2) + pow(two.y - one.y, 2));
    }
    else if ((firstPointIndex == 1 && secondPointIndex == 3) || (firstPointIndex == 3 && secondPointIndex == 1))
    {
        return sqrt(pow(tree.x - one.x, 2) + pow(tree.y - one.y, 2));
    }
    else
    {
        return sqrt(pow(two.x - tree.x, 2) + pow(two.y - tree.y, 2));
    }
}
