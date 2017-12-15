#include "Pizza.h"

using namespace std;

Pizza::Pizza()
{

}

Pizza::Pizza(string name, double price, int toppingsCount, vector<Topping> toppings, int status)
{
    this->name = name;
    this->price = price;
    this->toppings = toppings;
    this->toppingsCount = toppingsCount;
    this->status = status;
}
int Pizza::getStatus()
{
    return this->status;
}
void Pizza::setStatus(int status)
{
    this-> status = status;

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

vector <Topping> Pizza::getToppings()
{
    return toppings;
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

    fin >> pizza.status;

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

    fout << pizza.status;

    return fout;
}

