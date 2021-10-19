#include "math_operation.hpp"

using namespace std;

double add(vector<double> wartosci) {
    return wartosci[0] + wartosci[1];
}

double subtract(vector<double> wartosci) {
    return wartosci[0] - wartosci[1];
}

double volume(std::vector<double> wartosci) {
    return (wartosci[0] + wartosci[1]) * 0.5 * wartosci[2] * wartosci[3];
}