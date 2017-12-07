#ifndef PIZZA_H
#define PIZZA_H
/*  Pizza.h og pizza.cpp eru "models" Klasar, þeir eru tilbúnir til að skrifa í vector, get búið til Pizzu af stærðinni Topping */
/*  Vantar þá repo klasa. */
#include <iostream>
#include "Topping.h"
#include "vector"
using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        void addTopping(Topping topping);        /// til þess að bæta við toppings, úr topping model.

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Pizza& pizza);        /// Til þess að skrifa inn pizzur í lista.
        friend ostream& operator << (ostream& out, const Pizza& pizza); /// Til þess að skrifa út pizzur úr lista.


    private:
        vector<Topping> toppings;               /// Toppings verður skrifað í vector.
};

#endif // PIZZA_H
