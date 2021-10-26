#include <iostream>
#include "matrix.hpp"

using namespace  std;

int **createMatrix(int **matrix, int *rows, int *columns)
{
    cout << matrix;
    enterDimensions(rows, columns);
    matrix = allocateMatrix(matrix, *rows, *columns);
    fillMatrix(matrix, *rows, *columns);
    return nullptr;
}

void enterDimensions(int *rows, int *columns)
{
    cout << "Enter number of rows:";
    cin >> *rows;
    cout << "Enter number of columns:";
    cin >> *columns;
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

void fillMatrix(int **matrix, int rows, int columns)
{
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int column_number = 0; column_number < columns; ++column_number)
        {
            cout << "[" << row_number << "][" << column_number << "]=";
            cin >> matrix[row_number][column_number];
        }
    }
}

void fillMatrix(double **matrix, int rows, int columns)
{
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int column_number = 0; column_number < columns; ++column_number)
        {
            cout << "[" << row_number << "][" << column_number << "]=";
            cin >> matrix[row_number][column_number];
        }
    }
}