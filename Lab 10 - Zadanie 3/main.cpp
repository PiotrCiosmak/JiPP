#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    ifstream dane("dane.txt", ios::in);
    ofstream liniaAutobusowa("liniaAutobusowa.txt",ios::out);
    ofstream liniaTramwajowa("liniaTramwajowa.txt",ios::out);

    if(dane.fail())
    {
        cout<<"Error1\n";
        exit(1);
    }
    if(!liniaAutobusowa.is_open())
    {
        cout<<"Error2\n";
        exit(1);
    }
    if(!liniaTramwajowa.is_open())
    {
        cout<<"Error3\n";
        exit(1);
    }

    string linia;
    int n;
    while(!dane.eof())
    {
        getline(dane,linia);
        n=stoi(linia.substr(0,linia.find(" ")));
        if(n<100)
        {
            liniaAutobusowa<<linia<<endl;
        }
        else
        {
            liniaTramwajowa<<linia<<endl;
        }
    }

    dane.close();
    liniaAutobusowa.close();
    liniaTramwajowa.close();
}