#ifndef PROJEKT_1_MATRIXOPERATIONS_HPP
#define PROJEKT_1_MATRIXOPERATIONS_HPP

int **addMatrix(int **matrixA, int **matrixB, int rows, int columns);

double **addMatrix(double **matrixA, double **matrixB, int rows, int columns);

int **subtractMatrix(int **matrixA, int **matrixB, int rows, int columns);

double **subtractMatrix(double **matrixA, double **matrixB, int rows, int columns);

int **multiplyMatrix(int **matrixA, int **matrixB, int rowsA, int columnsA, int columnsB);

double **multiplyMatrix(double **matrixA, double **matrixB, int rowsA, int columnsA, int columnsB);

int **multiplyByScalar(int **matrix, int rows, int columns, int **scalar);

double **multiplyByScalar(double **matrix, int rows, int columns, double **scalar);

int **transpozeMatrix(int **matrix, int rows, int columns);

double **transpozeMatrix(double **matrix, int rows, int columns);

int **powerMatrix(int **matrix, int rows, int columns, unsigned long power);

double **powerMatrix(double **matrix, int rows, int columns, unsigned long power);

int **determinantMatrix(int **matrix, int rows, int columns); //(funkcja powinna zwracać wartość (typu takiego, jakiego są macierze), w tym przypadku wynik nie jest przekazywany przez referencję)

bool matrixIsDiagonal(int **matrix, int rows, int columns);

bool matrixIsDiagonal(double **matrix, int rows, int columns);

void swap(int *a, int *b); //(parametry przekazywane przez referencję)

int **sortRow(int *matrix, int columns);


int **sortRowsInMatrix(int **matrix, int rows, int columns);


#endif //PROJEKT_1_MATRIXOPERATIONS_HPP
