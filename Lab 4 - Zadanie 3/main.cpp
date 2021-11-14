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

void count(Tsamochod* wsk_sam, int roz_tab);


int main()
{
    constexpr int size{5};
    Tsamochod samTablica[size]={{"Fiat", "Grande punto",2009,"czarny","hatchback"},
                           {"Ford","Ka+",2020,"bialy","hatchback"},
                           {"Toyota","Corolla",2001,"szary","sedan"},
                           {"Audi","S8",2021,"czatny","coupe"},
                           {"Fiat","Seicento",2000,"hatchback"}};
    count(samTablica,size);


}

void count(Tsamochod* wsk_sam, int roz_tab)
{
    string* uzyte=new string[roz_tab];
    for (int i = 0; i < roz_tab; ++i)
    {
        uzyte[i]="";
    }
    for (int i = 0; i < roz_tab; ++i)
    {
        uzyte[i]=wsk_sam[i].marka;
        int licznik{1};
        for (int j = i+1; j < roz_tab; ++j)
        {
            if (wsk_sam[i].marka==wsk_sam[j].marka)
            {
                licznik++;
            }
        }
        bool czyUzyty{false};
        for (int j = 0; j < i; ++j)
        {
            if (uzyte[i]==wsk_sam[j].marka)
            {
                czyUzyty=true;
            }
        }
        if (!czyUzyty)
        {
            cout<<"Samochodow marki: "<<wsk_sam[i].marka<<" jest "<<licznik<<endl;
        }
    }
}