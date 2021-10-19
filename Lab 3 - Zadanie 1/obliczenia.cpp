#include "obliczenia.hpp"

double oblicz_pole(double a) {
    return a * a;
}

double oblicz_pole(double a, double b) {
    return a * b;
}

double oblicz_pole(double a, double b, double h) {
    return (a + b) * h * 0.5;
}