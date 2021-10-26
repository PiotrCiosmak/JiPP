#include <iostream>
#include <string>
#include "matrix.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    int rows_a{}, columns_a{};

    int **matrixA{nullptr};//jak zmienic int na double

    if (!strcmp(argv[1], "addMatrix"))//2 Muszą mieć taki sam wymiar
    {
        createMatrix(matrixA, &rows_a, &columns_a);
    }
    else if (!strcmp(argv[1], "subtractMatrix"))//2 Liczba kolumn pierwszej macierzy = liczby wierszy w drugiej macierzy
    {

    }
    else if (!strcmp(argv[1], "multiplyMatrix"))//2
    {

    }
    else if (!strcmp(argv[1], "multiplyByScalar"))//1
    {

    }
    else if (!strcmp(argv[1], "transpozeMatrix"))//1
    {

    }
    else if (!strcmp(argv[1], "powerMatrix"))//1
    {

    }
    else if (!strcmp(argv[1], "determinantMatrix"))//1
    {

    }
    else if (!strcmp(argv[1], "matrixIsDiagonal"))//1
    {

    }
    else if (!strcmp(argv[1], "swap"))//0
    {

    }
    else if (!strcmp(argv[1], "sortRow"))//0
    {

    }
    else if (!strcmp(argv[1], "sortRowsInMatrix"))//1
    {

    }
    else if (!strcmp(argv[1], "help"))
    {

    }
    else
    {
        //error
    }
    return 0;
}