
#include <fstream>
#include <iostream>
using namespace std;
#include "Pizzarepo.h"
#include "Pizza.h"

Pizzarepo::Pizzarepo()
{
    //ctor
}

Pizzarepo::~Pizzarepo()
{
    //dtor
}
void Pizzarepo::storePizza(const Pizza& pizza){

    ofstream fout;
    fout.open("pizzas.bin", ios::binary);

    pizza.write(fout);

    fout.close();


}

Pizza Pizzarepo::retrivePizza() {

    ifstream fin;
    fin.open("pizzas.bin", ios::binary);
    Pizza pizza;
    pizza.read(fin);

    fin.close();

    return pizza;

}
