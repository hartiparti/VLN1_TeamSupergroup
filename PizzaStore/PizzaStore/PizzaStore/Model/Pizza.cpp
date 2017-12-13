#include "Pizza.h"

using namespace std;

Pizza::Pizza()
{

}

Pizza::Pizza(string name, double price, int toppingsCount, vector<Topping> toppings)
{
    this->name = name;
    this->price = price;
    this->toppings = toppings;
    this->toppingsCount = toppingsCount;
}

string Pizza::getName()
{
    return this-> name;
}

double Pizza::getPrice()
{
    return this->price;
}

void Pizza::setName(string name)
{
    this->name = name;
}

void Pizza::setPrice(double price)
{
    this->price = price;
}

void Pizza::addTopping(Topping topping)
{
    toppings.push_back(topping);
}

ifstream& operator >> (ifstream& fin, Pizza& pizza)
{
    fin >> pizza.name;
    fin >> pizza.price;
    fin >> pizza.toppingsCount;

    for(int i = 0; i < pizza.toppingsCount; i++)
    {
        Topping t;
        fin >> t;
        pizza.toppings.push_back(t);
    }

    return fin;
}


ofstream& operator << (ofstream& fout, const Pizza& pizza)
{
    fout << pizza.name << endl;
    fout << pizza.price << endl;
    fout << pizza.toppings.size();

    for(int i = 0; i < pizza.toppings.size(); i++)
    {
        fout << pizza.toppings[i];
    }

    return fout;
}
