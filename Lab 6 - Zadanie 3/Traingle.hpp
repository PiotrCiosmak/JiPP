#ifndef LAB_6_ZADANIE_3_TRAINGLE_HPP
#define LAB_6_ZADANIE_3_TRAINGLE_HPP

#include "Node.hpp"
#include <string>

class Traingle
{
    //BŁAD
    //std::ostream &operator<<(std::ostream &lhs, Traingle &rhs)
    //{
    //   lhs << "Pierwszy wierzcholek: " << rhs.one.x << "," << rhs.one.y << std::endl
    //        << "Drugi wierzcholek: " << rhs.two.x << "," << rhs.two.y << std::endl
    //        << "Trzeci wierzcholek: " << rhs.tree.x << "," << rhs.tree.y << std::endl;
    //    return lhs;
    //}

public:
    Traingle();
    Traingle(Node a, Node b, Node c, std::string nazwa);

    void display();

    double distance(int firstPointIndex, int secondPointIndex);

private:
    Node one, two, tree;
    std::string nazwa;
};

#endif //LAB_6_ZADANIE_3_TRAINGLE_HPP
