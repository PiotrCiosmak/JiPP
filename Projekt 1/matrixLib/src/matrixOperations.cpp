#include "../include/matrixLib/matrixOperations.hpp"
#include "../../matrixApp/matrix.hpp"

int **addMatrix(int **matrixA, int **matrixB, int rows, int columns)
{
    int **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrixA[row_number][col_number] + matrixB[row_number][col_number];
        }
    }
    return resultMatrix;
}

double **addMatrix(double **matrixA, double **matrixB, int rows, int columns)
{
    double **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrixA[row_number][col_number] + matrixB[row_number][col_number];
        }
    }
    return resultMatrix;
}

int **subtractMatrix(int **matrixA, int **matrixB, int rows, int columns)
{
    int **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrixA[row_number][col_number] - matrixB[row_number][col_number];
        }
    }
    return resultMatrix;
}

double **subtractMatrix(double **matrixA, double **matrixB, int rows, int columns)
{
    double **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrixA[row_number][col_number] - matrixB[row_number][col_number];
        }
    }
    return resultMatrix;
}

int **multiplyMatrix(int **matrixA, int **matrixB, int rowsA, int columnsA, int columnsB)
{
    int **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rowsA, &columnsB, 3);
    //algorytm
    return resultMatrix;
}

double **multiplyMatrix(double **matrixA, double **matrixB, int rowsA, int columnsA, int columnsB)
{
    double **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rowsA, &columnsB, 3);
    //algorytm
    return resultMatrix;
}

int **multiplyByScalar(int **matrix, int rows, int columns, int **scalar)
{
    int **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrix[row_number][col_number] * scalar[row_number][col_number];
        }
    }
    return resultMatrix;
}

double **multiplyByScalar(double **matrix, int rows, int columns, double **scalar)
{
    double **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrix[row_number][col_number] * scalar[row_number][col_number];
        }
    }
    return resultMatrix;
}

int **transpozeMatrix(int **matrix, int rows, int columns)
{
    int **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &columns, &rows, 3);
    for (int row_number = 0; row_number < columns; ++row_number)
    {
        for (int col_number = 0; col_number < rows; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrix[col_number][row_number];
        }
    }
    return resultMatrix;
}

double **transpozeMatrix(double **matrix, int rows, int columns)
{
    double **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &columns, &rows, 3);
    for (int row_number = 0; row_number < columns; ++row_number)
    {
        for (int col_number = 0; col_number < rows; ++col_number)
        {
            resultMatrix[row_number][col_number] = matrix[col_number][row_number];
        }
    }
    return resultMatrix;
}

int **powerMatrix(int **matrix, int rows, int columns, unsigned long power)
{
    int **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (unsigned long i = 0; i < power; ++i)
    {
        resultMatrix += (matrix, matrix, rows, columns, columns);
    }
    return resultMatrix;
}

double **powerMatrix(double **matrix, int rows, int columns, unsigned long power)
{
    double **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);
    for (unsigned long i = 0; i < power; ++i)
    {
        resultMatrix += (matrix, matrix, rows, columns, columns);
    }
    return resultMatrix;
}

bool matrixIsDiagonal(int **matrix, int rows, int columns)
{
    int i{0}, j{0};
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            if (((row_number != i) || (col_number != i)) && (matrix[row_number][col_number] != 0))
            {
                return false;
            }
        }
        i++;
    }
    return true;
}

bool matrixIsDiagonal(double **matrix, int rows, int columns)
{
    int i{0};
    for (int row_number = 0; row_number < rows; ++row_number)
    {
        for (int col_number = 0; col_number < columns; ++col_number)
        {
            if (((row_number != i) || (col_number != i)) && (matrix[row_number][col_number] != 0))
            {
                return false;
            }
        }
        i++;
    }
    return true;
}