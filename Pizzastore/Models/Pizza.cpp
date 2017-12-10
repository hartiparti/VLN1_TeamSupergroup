#include "Pizza.h"
#include <stddef.h>
#include <fstream>

using namespace std;

Pizza::Pizza()
{
    //ctor
}

Pizza::~Pizza()
{
    //dtor
}

void Pizza::addTopping(Topping topping){

    toppings.push_back(topping);            /// Vectorinn tekur vi� toppings og b�tir �.

}
void Pizza::write(ofstream& fout) const {    /// Falli� til a� skrifa inn � vector.
    int topping_count = toppings.size();     /// int breyta af st�r� vectorsins topping.

    fout.write((char*)(&topping_count), sizeof(int));

    for(int i = 0; i < topping_count; i++){
        toppings[i].write(fout);
    }

}

void Pizza::read(ifstream& fin){

    int topping_count = toppings.size();     /// int breyta af st�r� vectorsins topping.

    fin.read((char*)(&topping_count), sizeof(int));

    Topping topping;

    for(int i = 0; i < topping_count; i++){
        topping.read(fin);
        addTopping(topping);
    }

}

istream& operator >> (istream& in, Pizza& pizza){                    /// Hla�a inn � vector, toppings.

    Topping topping;
    for(unsigned int i = 0; i < pizza.toppings.size(); i++){

       in >> topping;
       pizza.addTopping(topping);
    }
    return in;
}



ostream& operator << (ostream& out, const Pizza& pizza){            /// prenta �t Pizzu m toppings vector, ath en ekki � skr�, heldur bara � skj�.

    out << "        Pizza with toppings: ";
    cout << endl;
    for(unsigned int i = 0; i < pizza.toppings.size(); i++){

        out << "            "   << pizza.toppings[i] << endl;
    }
    return out;

}
