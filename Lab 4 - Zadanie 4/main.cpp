#include <iostream>
#include <string>

using namespace  std;

struct Tsamochod
{
    string marka;
    string model;
    int rokProdukcji;
    string kolor;
    string nadwozie;
};

int young(Tsamochod* wsk_sam, int roz_tab);


int main()
{
    constexpr int size{5};
    Tsamochod samTablica[size]={{"Fiat", "Grande punto",2009,"czarny","hatchback"},
                                {"Ford","Ka+",2020,"bialy","hatchback"},
                                {"Toyota","Corolla",1998,"szary","sedan"},
                                {"Audi","S8",2021,"czatny","coupe"},
                                {"Fiat","Seicento",2000,"hatchback"}};
    int index{young(samTablica,size)};
    cout<<"Indeks najstarszego auta: "<<index<<endl;

}

int young(Tsamochod* wsk_sam, int roz_tab)
{
    int min{INT_MAX},index{};
    for (int i = 0; i < roz_tab; ++i)
    {
        if (wsk_sam[i].rokProdukcji<min)
        {
            min=wsk_sam[i].rokProdukcji;
            index=i;
        }
    }
    return index;
}