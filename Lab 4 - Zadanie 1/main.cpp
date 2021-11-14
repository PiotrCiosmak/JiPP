#include <iostream>
#include <string>

using namespace  std;

struct samochod
{
    string marka;
    string model;
    int rokProdukcji;
    string kolor;
};

int main()
{
    samochod samTablica[]={{"Fiat", "Grande punto",2009,"czarny"},
                           {"Ford","Ka+",2020,"bialy"},
                           {"Toyota","Corolla",2001,"szary"},
                           {"Audi","S8",2021,"czatny"}};
    for (int i = 0; i < 4; ++i)
    {
        cout<<"|"<<samTablica[i].marka<<"|"<<samTablica[i].model<<"|"<<samTablica[i].rokProdukcji<<"|"<<samTablica[i].kolor<<"|\n";
    }

}
