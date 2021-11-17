#ifndef LAB_6___ZADANIE_3_NODE_HPP
#define LAB_6___ZADANIE_3_NODE_HPP

class Traingle;

class Node
{
    friend Traingle;
public:
    Node();
    Node(double a, double b);
private:
    double x,y;

};

#endif //LAB_6___ZADANIE_3_NODE_HPP
