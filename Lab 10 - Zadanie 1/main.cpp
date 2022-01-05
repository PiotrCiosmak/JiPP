#include <iostream>

using namespace std;

template<typename Typ>
Typ myMax(Typ a, Typ b)
{
    return (a >= b) ? a : b;
}

template<typename Typ>
Typ myMin(Typ a, Typ b)
{
    return (a <= b) ? a : b;
}

template<typename Typ>
void printArray(Typ *a, int rozmiar)
{
    for (int i = 0; i < rozmiar; ++i,a++)
    {
        cout << "[" << i << "] = " << *a << endl;
    }
}

template<typename Typ>
void printMatrix(Typ *a, int rozmiar1, int rozmiar2)
{
    for (int i = 0; i < rozmiar1; ++i)
    {
        for (int j = 0; j < rozmiar2; ++j)
        {
            cout << "[" << i << "][" << j << "] = " << a[i][j] << endl;
        }
    }
}

int main()
{
    cout<<myMax<int>(1,6)<<endl;
    cout<<myMin<int>(5,6)<<endl;
    int a[5]={1,2,3,6,7};
    printArray(a,5);

    double b[2][2]= {1,2,3,4};
    printMatrix(b,2,2);
}
