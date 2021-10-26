#ifndef PROJEKT_1_MATRIX_HPP
#define PROJEKT_1_MATRIX_HPP

int **createMatrix(int **matrix, int *rows, int *columns);

void enterDimensions(int *rows, int *columns);

int **allocateMatrix(int **matrix, int rows, int columns);

double **allocateMatrix(double **matrix, int rows, int columns);

void fillMatrix(int **matrix, int rows, int columns);

void fillMatrix(double **matrix, int rows, int columns);

#endif //PROJEKT_1_MATRIX_HPP
