#include <iostream>
#include <string>

using namespace  std;

struct samochod
{
    string marka;
    string model;
    int rokProdukcji;
    string kolor;
    string nadwozie;
};

int main()
{
    samochod samTablica[]={{"Fiat", "Grande punto",2009,"czarny","hatchback"},
                           {"Ford","Ka+",2020,"bialy","hatchback"},
                           {"Toyota","Corolla",2001,"szary","sedan"},
                           {"Audi","S8",2021,"czatny","coupe"}};
    for (int i = 0; i < 4; ++i)
    {
        cout<<"|"<<samTablica[i].marka<<"|"<<samTablica[i].model<<"|"<<samTablica[i].rokProdukcji<<"|"<<samTablica[i].kolor<<"|"<<samTablica[i].nadwozie<<"|\n";
    }

}
