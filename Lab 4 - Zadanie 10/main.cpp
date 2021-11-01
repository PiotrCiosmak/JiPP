#include <iostream>
#include "Figura.h"
using  namespace std;

int main()
{
    int IleW;
    cout<<"Ile wierzcholkow ma figura: ";
    cin>>IleW;
    Figura f1(IleW);
    for (int i = 0; i < IleW; ++i)
    {
        int x,y;
        cout<<"["<<i<<"] x:";
        cin>>x;
        f1.tabP[i].setX(x);
        cout<<"["<<i<<"] y:";
        cin>>y;
        f1.tabP[i].setY(y);
    }
    for (int i = 0; i < IleW; ++i)
    {
        cout<<"["<<i<<"] x="<<f1.tabP[i].getX()<<endl;
        cout<<"["<<i<<"] y="<<f1.tabP[i].getY()<<endl;
    }
}
