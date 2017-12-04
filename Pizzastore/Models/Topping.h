#ifndef TOPPING_H
#define TOPPING_H
/*  Pizza.h og pizza.cpp eru "models" Klasar, �eir eru tilb�nir til a� skrifa � vector, get b�i� til Pizzu af st�r�inni Topping */
/*  Vantar �� repo klasa. */
#include <iostream>
#include <string.h>
using namespace std;

class Topping
{
    public:
        Topping();
        Topping(string name, double price);
        virtual ~Topping();

        void write(ofstream& fout) const;               /// skrifa topping, en ekki � skr�.
        void read(istream& fin);                        /// lesa topping, en ekki � skr�.
        friend istream&  operator >> (istream& in, Topping& topping);
        friend ostream&  operator << (ostream& out, const Topping& topping);

    protected:

    private:
        string name;
        double price;
};

#endif // TOPPING_H
