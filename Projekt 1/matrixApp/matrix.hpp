#ifndef PROJEKT_1_MATRIX_HPP
#define PROJEKT_1_MATRIX_HPP

int **createMatrix(int **matrix, int *rows, int *columns, int option = 1,double scalar=0);

double **createMatrix(double **matrix, int *rows, int *columns, int option = 1,double scalar=0);

void enterDimensions(int *rows, int *columns, int option = 1);

int **allocateMatrix(int **matrix, int rows, int columns);

double **allocateMatrix(double **matrix, int rows, int columns);

void fillMatrix(int **matrix, int rows, int columns,int option,double scalar);

void fillMatrix(double **matrix, int rows, int columns,int option,double scalar);

void removeMatrix(int **matrix,int rows);

void removeMatrix(double **matrix,int rows);

void showMatrix(int **matrix, int rows, int columns);

void showMatrix(double **matrix, int rows, int columns);

#endif //PROJEKT_1_MATRIX_HPP
