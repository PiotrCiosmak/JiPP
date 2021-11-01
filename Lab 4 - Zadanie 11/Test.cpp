//
// Created by piotr on 01.11.2021.
//

#include "Test.hpp"
#include <iostream>

using namespace std;

Test::Test()
{
    cout<<"Konstruktor!!!'\n";
    tab = new int[1024];
    system("PAUSE");
}

Test::~Test()
{
    cout<<"Destruktor!!!\n";
    system("PAUSE");
    delete [] tab;
}