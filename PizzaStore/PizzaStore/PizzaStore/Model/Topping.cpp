#include "Topping.h"
Topping::Topping()
{
    name = " ";
    price = 0.0;
}

Topping::Topping(string name, double price){

    this->name = name;
    this->price = price;

}

void Topping::setPrice(double price){

    this->price = price;
}

void Topping::setName(string name){

    this->name = name;

}

string Topping::getName(){

    return this->name;
}

double Topping::getPrice(){

    return this->price;
}

ifstream& operator >> (ifstream& fin, Topping& topping)
{
    fin >> topping.name;
    fin >> topping.price;

    return fin;
}

ofstream& operator << (ofstream& fout, const Topping& topping)
{
    fout << topping.name << endl;
    fout << topping.price << endl;
    return fout;
}
