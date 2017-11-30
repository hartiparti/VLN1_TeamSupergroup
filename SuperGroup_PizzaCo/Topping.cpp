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
    //cout << "Name: ";         // Vegna þess að við skrifum í skrá
    in >> topping.name;
   //cout << "Price: ";    //  Vegna þess að við skrifum í skrá
    in >> topping.price;

    return in;

}
