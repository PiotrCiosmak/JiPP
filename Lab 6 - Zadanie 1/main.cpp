#include <iostream>
#include <math.h>
#include "Vector.hpp"
#include "Node.hpp"

using namespace std;

double pointsDistance(Node a, Node b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main()
{
    Node A(10, 20);
    Node B(10, 25);
    double odlegoscAodB{pointsDistance(A, B)};
    cout << "Odleglosc A od B:" << odlegoscAodB << endl;
}