#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double bok{6.5};
    int bokKwadratu{static_cast<int>(bok)};
    cout << "Pole Kwadratu: " << bokKwadratu * bokKwadratu<<endl;
}

