#include "Topping.h"
#include <string.h>
#include "Pizza.h"
Topping::Topping()
{
    //ctor
}

Topping::~Topping(){

}

Topping::Topping(char* name, double price){

    strcpy(this->name, name);
    this->price = price;
}


ostream& operator << (ostream& out, const Topping& topping){
        out << topping.name << " " <<  topping.price;
        return out;
    }
istream& operator >> (istream& in,Topping& topping){
    //cout << "Name: ";         // Vegna �ess a� vi� skrifum � skr�
    in >> topping.name;
   //cout << "Price: ";    //  Vegna �ess a� vi� skrifum � skr�
    in >> topping.price;

    return in;

}
