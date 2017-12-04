#ifndef TOPPING_H
#define TOPPING_H
/*  Pizza.h og pizza.cpp eru "models" Klasar, þeir eru tilbúnir til að skrifa í vector, get búið til Pizzu af stærðinni Topping */
/*  Vantar þá repo klasa. */
#include <iostream>
#include <string.h>
using namespace std;

class Topping
{
    public:
        Topping();
        Topping(string name, double price);
        virtual ~Topping();

        void write(ofstream& fout) const;               /// skrifa topping, en ekki í skrá.
        void read(istream& fin);                        /// lesa topping, en ekki í skrá.
        friend istream&  operator >> (istream& in, Topping& topping);
        friend ostream&  operator << (ostream& out, const Topping& topping);

    protected:

    private:
        string name;
        double price;
};

#endif // TOPPING_H
