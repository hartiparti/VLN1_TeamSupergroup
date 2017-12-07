#ifndef PIZZA_H
#define PIZZA_H
/*  Pizza.h og pizza.cpp eru "models" Klasar, �eir eru tilb�nir til a� skrifa � vector, get b�i� til Pizzu af st�r�inni Topping */
/*  Vantar �� repo klasa. */
#include <iostream>
#include "Topping.h"
#include "vector"
using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();

        void addTopping(Topping topping);        /// til �ess a� b�ta vi� toppings, �r topping model.

        void write(ofstream& fout) const;
        void read(ifstream& fin);

        friend istream& operator >> (istream& in, Pizza& pizza);        /// Til �ess a� skrifa inn pizzur � lista.
        friend ostream& operator << (ostream& out, const Pizza& pizza); /// Til �ess a� skrifa �t pizzur �r lista.


    private:
        vector<Topping> toppings;               /// Toppings ver�ur skrifa� � vector.
};

#endif // PIZZA_H
