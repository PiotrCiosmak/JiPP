#include <iostream>
#include <string>
#include "matrix.hpp"
#include "exception.hpp"
#include "../matrixLib/include/matrixLib/matrixOperations.hpp"

#define INT 1
#define DOUBLE 2
#define TYP_LICZB INT

using namespace std;

int main(int argc, char *argv[])
{
    int rows_a{}, columns_a{};

#if (TYP_LICZB == INT)
    int **matrixA{nullptr};
    int **resultMatrix{nullptr};
#else
    double **matrixA{nullptr};
    double **resultMatrix{nullptr};
#endif
    matrixA = createMatrix(matrixA, &rows_a, &columns_a);

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    if (!strcmp(argv[1], "addMatrix"))
    {
#if (TYP_LICZB == INT)
        int **matrixB{nullptr};
        matrixB = createMatrix(matrixB, &rows_a, &columns_a, 2);
#else
        double **matrixB{nullptr};
        matrixB = createMatrix(matrixB, &rows_a, &columns_a, 2);
#endif
        resultMatrix = addMatrix(matrixA, matrixB, rows_a, columns_a);
        showMatrix(resultMatrix, rows_a, columns_a);
        removeMatrix(matrixB, rows_a);
        removeMatrix(matrixA, rows_a);
        removeMatrix(resultMatrix, rows_a);
    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "subtractMatrix"))
    {
#if (TYP_LICZB == INT)
        int **matrixB{nullptr};
        matrixB = createMatrix(matrixB, &rows_a, &columns_a, 2);
#else
        double **matrixB{nullptr};
        matrixB = createMatrix(matrixB, &rows_a, &columns_a, 2);
#endif
        resultMatrix = subtractMatrix(matrixA, matrixB, rows_a, columns_a);
        showMatrix(resultMatrix, rows_a, columns_a);
        removeMatrix(matrixB, rows_a);
        removeMatrix(matrixA, rows_a);
        removeMatrix(resultMatrix, rows_a);
    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "multiplyMatrix"))//DO ZRIOBIENIA
    {
        int rows_b{columns_a}, columns_b{};
#if (TYP_LICZB == INT)
        int **matrixB{nullptr};
        matrixB = createMatrix(matrixB, &rows_b, &columns_b, 0);
#else
        double **matrixB{nullptr};
        matrixB = createMatrix(matrixB, &rows_b, &columns_b, 0);
#endif
        resultMatrix = multiplyMatrix(matrixA, matrixB, rows_a, columns_a, rows_b);
        showMatrix(resultMatrix, rows_a, columns_a);
        removeMatrix(matrixB, rows_a);
        removeMatrix(matrixA, rows_a);
        removeMatrix(resultMatrix, rows_a);
    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "multiplyByScalar"))
    {
#if (TYP_LICZB == INT)
        int scalar;
        cout << "Podaj sklar: ";
        cin >> scalar;
        int **matrixScalar{nullptr};
#else
        double scalar;
        cout << "Podaj sklar: ";
        cin>>scalar;
        double **matrixScalar{nullptr};
#endif
        matrixScalar = createMatrix(matrixScalar, &rows_a, &columns_a, 4, scalar);
        resultMatrix = multiplyByScalar(matrixA, rows_a, columns_a, matrixScalar);
        showMatrix(resultMatrix, rows_a, columns_a);
        removeMatrix(matrixScalar, rows_a);
        removeMatrix(matrixA, rows_a);
        removeMatrix(resultMatrix, rows_a);
    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "transpozeMatrix"))
    {
        resultMatrix = transpozeMatrix(matrixA, rows_a, columns_a);
        showMatrix(resultMatrix, columns_a, rows_a);
        removeMatrix(matrixA, rows_a);
        removeMatrix(resultMatrix, columns_a);
    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "powerMatrix"))//JAK ZROBIE MNOZENIE TO ZADZIAŁA
    {
        unsigned long power{stoul(argv[2])};
        resultMatrix = powerMatrix(matrixA, rows_a, columns_a, power);
        showMatrix(resultMatrix, columns_a, rows_a);
        removeMatrix(matrixA, rows_a);
        removeMatrix(resultMatrix, columns_a);

    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "determinantMatrix"))//TRUDNE ZROBIĆ
    {

    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "matrixIsDiagonal"))
    {
        bool score{matrixIsDiagonal(matrixA, rows_a, columns_a)};
        if (score)
        {
            cout << "Ta macierz jest diagonalizowalna\n";
        }
        else
        {
            cout << "Ta macierz nie jest diagonalizowalna\n";
        }
        removeMatrix(matrixA, rows_a);
        removeMatrix(resultMatrix, rows_a);
    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "swap"))//ZROBIĆ
    {

    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "sortRow"))//ZROBIĆ
    {

    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "sortRowsInMatrix"))//ZROBIĆ
    {

    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (!strcmp(argv[1], "help"))
    {
        help();
    }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    else
    {
        error_par();
    }
}