#include "ControlerPizza.h"
#include <fstream>
#include "pizza.h"
using namespace std;


ControlerPizza::ControlerPizza()
{
    //ctor
}

ControlerPizza::~ControlerPizza()
{
    //dtor
}



 void ControlerPizza::storePizza(const Pizza& pizza){
    ofstream fout;
    fout.open("pizzas.txt");

    fout << pizza;

    fout.close();
 }

Pizza ControlerPizza::retrivePizza(){

    ifstream fin;
    fin.open("pizzas.txt");
    Pizza pizza;
    fin >> pizza;

    fin.close();
    return pizza;
}
