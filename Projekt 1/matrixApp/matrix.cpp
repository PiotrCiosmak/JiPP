#include <iostream>
#include "matrix.hpp"

using namespace std;

int **createMatrix(int **matrix, int *rows, int *columns, int option, double scalar)
{
    enterDimensions(rows, columns, option);
    matrix = allocateMatrix(matrix, *rows, *columns);
    fillMatrix(matrix, *rows, *columns, option, scalar);
    return matrix;
}

double **createMatrix(double **matrix, int *rows, int *columns, int option, double scalar)
{
    enterDimensions(rows, columns, option);
    matrix = allocateMatrix(matrix, *rows, *columns);
    fillMatrix(matrix, *rows, *columns, option, scalar);
    return matrix;
}

void enterDimensions(int *rows, int *columns, int option)
{
    if (option == 1)
    {
        cout << "Uzupelnij informacje dotyczace macierzy A\n";
        cout << "Wprowadz ilosc wierszy:";
        cin >> *rows;
        cout << "Wprowadz ilosc kolumn:";
        cin >> *columns;
    }
    else if (option == 0)
    {
        cout << "Uzupelnij informacje dotyczace macierzy B\n";
        cout << "Wprowadz ilosc kolumn:";
        cin >> *columns;
    }
}

int **allocateMatrix(int **matrix, int rows, int columns)
{
    matrix = new int *[rows];
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        matrix[row_number] = new int[columns];
    }
    return matrix;
}

double **allocateMatrix(double **matrix, int rows, int columns)
{
    matrix = new double *[rows];
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        matrix[row_number] = new double[columns];
    }
    return matrix;
}

void fillMatrix(int **matrix, int rows, int columns, int option, double scalar)
{
    if (option == 4)
    {
        for (int row_number = 0; row_number < rows; ++row_number)
        {
            for (int column_number = 0; column_number < columns; ++column_number)
            {
                matrix[row_number][column_number] = scalar;
            }
        }
        return;
    }
    if (option != 3)
    {
        if (option == 2)
        {
            static char matrixName{'B'};
            cout << "Uzupelnij macierz " << matrixName << "\n";
            matrixName++;
        }
        for (int row_number = 0; row_number < rows; ++row_number)
        {
            for (int column_number = 0; column_number < columns; ++column_number)
            {
                cout << "[" << row_number << "][" << column_number << "]=";
                cin >> matrix[row_number][column_number];
            }
        }
    }
    else
    {
        for (int row_number = 0; row_number < rows; ++row_number)
        {
            for (int column_number = 0; column_number < columns; ++column_number)
            {
                matrix[row_number][column_number]=0;
            }
        }
    }
}

void fillMatrix(double **matrix, int rows, int columns, int option, double scalar)
{
    if (option == 4)
    {
        for (int row_number = 0; row_number < rows; ++row_number)
        {
            for (int column_number = 0; column_number < columns; ++column_number)
            {
                matrix[row_number][column_number] = scalar;
            }
        }
        return;
    }
    if (option != 3)
    {
        if (option == 2)
        {
            static char matrixName{'B'};
            cout << "Uzupelnij macierz " << matrixName << "\n";
            matrixName++;
        }
        for (int row_number = 0; row_number < rows; ++row_number)
        {
            for (int column_number = 0; column_number < columns; ++column_number)
            {
                cout << "[" << row_number << "][" << column_number << "]=";
                cin >> matrix[row_number][column_number];
            }
        }
    }
}

void removeMatrix(int **matrix, int rows)
{
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        delete[]matrix[row_number];
    }
    delete[]matrix;
}

void removeMatrix(double **matrix, int rows)
{
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        delete[]matrix[row_number];
    }
    delete[]matrix;
}

void showMatrix(int **matrix, int rows, int columns)
{
    cout << "\nMacierz wynikowa:\n";
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int column_number = 0; column_number < columns; ++column_number)
        {
            cout << "[" << row_number << "][" << column_number << "]=" << matrix[row_number][column_number] << "\n";
        }
    }
}

void showMatrix(double **matrix, int rows, int columns)
{
    cout << "\nMacierz wynikowa:\n";
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int column_number = 0; column_number < columns; ++column_number)
        {
            cout << "[" << row_number << "][" << column_number << "]=" << matrix[row_number][column_number] << "\n";
        }
    }
}