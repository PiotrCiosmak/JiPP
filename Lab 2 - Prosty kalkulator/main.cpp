#include <iostream>
#include <string>
#include <vector>
#include "math_operation.hpp"
#include "exception.hpp"

using namespace std;

int main(int argc, char *argv[]) {

    vector<double> liczby;

    for (int i = 2; i < argc; ++i) {
        double tmp{stod(argv[i])};
        liczby.push_back(tmp) ;
    }

    if (!strcmp(argv[1], "add")) {
        cout << endl << liczby[0] << " + " << liczby[1] << " = " << add(liczby) << endl;
    } else if (!strcmp(argv[1], "subtract")) {
        cout << endl << liczby[0] << " - " << liczby[1] << " = " << subtract(liczby) << endl;
    } else if (!strcmp(argv[1], "volume")) {
        cout << endl << "Objetosc graniastoslupa prostego o podstawie trapezu wynosi: " << volume(liczby) << "[j^3]"
             << endl;
    } else if (!strcmp(argv[1], "help")) {
        help();
    } else {
        error_par();
    }
}