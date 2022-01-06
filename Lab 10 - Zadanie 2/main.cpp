#include <iostream>

using namespace std;

template<typename T>
class Tarray
{
public:
    Tarray(int size)
    {
        tab=new T[size];
        rozmiar=size;
        for (int i = 0; i < size; ++i)
        {
            tab[i]=0;
        }
    }
    ~Tarray()
    {
        delete[] tab;
        tab=nullptr;
    }
    void pokaz()
    {
        for (int i = 0; i < rozmiar; ++i)
        {
            cout<<"["<<i<<"]="<<tab[i]<<"\t";
        }
        cout<<"\n";
    }
    void wprowadz(T wartosc, int index)
    {
        if(index < rozmiar&&index>=0)
        {
            tab[index]=wartosc;
        }
        else
        {
            cout<<"BLAD"<<endl;
            exit(1);
        }
    }
    void usun(int index)
    {
        if(index < rozmiar&&index>=0)
        {
            tab[index]=0;
        }
    }
private:
    T *tab;
    int rozmiar;
};


int main()
{
    Tarray<int> POJEMNIK{5};
    POJEMNIK.wprowadz(1,2);
    POJEMNIK.wprowadz(12,1);
    POJEMNIK.wprowadz(122,3);
    POJEMNIK.wprowadz(1123,4);
    POJEMNIK.wprowadz(2,0);
    POJEMNIK.pokaz();
    POJEMNIK.usun(0);
    POJEMNIK.pokaz();
}
