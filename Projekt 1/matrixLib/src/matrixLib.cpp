#include "../include/matrixLib/matrixLib.hpp"
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
    int sum;
    resultMatrix = createMatrix(resultMatrix, &rowsA, &columnsB, 3);
    for (int row_number = 0; row_number < rowsA; ++row_number)
    {
        for (int col_number_1 = 0; col_number_1 < columnsB; ++col_number_1)
        {
            sum = 0;
            for (int col_number_2 = 0; col_number_2 < columnsA; ++col_number_2)
            {
                sum += matrixA[row_number][col_number_2] * matrixB[col_number_2][col_number_1];
            }
            resultMatrix[row_number][col_number_1] = sum;
        }
    }
    return resultMatrix;
}

double **multiplyMatrix(double **matrixA, double **matrixB, int rowsA, int columnsA, int columnsB)
{
    double **resultMatrix{nullptr};
    double sum;
    resultMatrix = createMatrix(resultMatrix, &rowsA, &columnsB, 3);
    for (int row_number = 0; row_number < rowsA; ++row_number)
    {
        for (int col_number_1 = 0; col_number_1 < columnsB; ++col_number_1)
        {
            sum = 0;
            for (int col_number_2 = 0; col_number_2 < columnsA; ++col_number_2)
            {
                sum += matrixA[row_number][col_number_2] * matrixB[col_number_2][col_number_1];
            }
            resultMatrix[row_number][col_number_1] = sum;
        }
    }
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

    resultMatrix = multiplyMatrix(matrix, matrix, rows, columns, columns);

    for (unsigned long i = 2; i < power; ++i)
    {
        resultMatrix = multiplyMatrix(resultMatrix, matrix, rows, columns, columns);
    }
    return resultMatrix;
}

double **powerMatrix(double **matrix, int rows, int columns, unsigned long power)
{
    double **resultMatrix{nullptr};
    resultMatrix = createMatrix(resultMatrix, &rows, &columns, 3);

    resultMatrix = multiplyMatrix(matrix, matrix, rows, columns, columns);

    for (unsigned long i = 2; i < power; ++i)
    {
        resultMatrix = multiplyMatrix(resultMatrix, matrix, rows, columns, columns);
    }
    return resultMatrix;
}

int determinantMatrix(int **matrix, int rows, int columns)
{
    for (int i = 1; i < rows-1; ++i)
    {
        for (int j = i+1; j < rows; ++j)
        {
            for (int k = i+1; k < rows; ++k)
            {
                matrix[j][k]=matrix[j][k]-matrix[j][i]/matrix[i][i]*matrix[i][k];
            }
        }
    }

    int det{1};

    for (int i = 1; i < rows; ++i)
    {
        det*=matrix[i][i];
    }
    return det;
}//ZROBIĆ

double determinantMatrix(double **matrix, int rows, int columns)
{
    return 0;
}//ZROBIĆ

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

void swap(int &a, int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}

void swap(double &a, double &b)
{
    double tmp=a;
    a=b;
    b=tmp;
}

void sortRow(int *matrix, int columns)
{
    for (int j = 0; j < columns-1; ++j)
    {
        for (int i = 0; i < columns-1; ++i)
        {
            if (matrix[i]>matrix[i+1])
            {
                swap(matrix[i],matrix[i+1]);
            }
        }
    }
}

void sortRow(double *matrix, int columns)
{
    for (int j = 0; j < columns-1; ++j)
    {
        for (int i = 0; i < columns-1; ++i)
        {
            if (matrix[i]>matrix[i+1])
            {
                swap(matrix[i],matrix[i+1]);
            }
        }
    }
}

void sortRowsInMatrix(int **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i,*matrix++)
    {
        sortRow(*matrix,columns);
    }
}

void sortRowsInMatrix(double **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i,*matrix++)
    {
        sortRow(*matrix,columns);
    }
}