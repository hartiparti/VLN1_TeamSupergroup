#ifndef TOPPING_H
#define TOPPING_H

#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Topping
{
    public:
        Topping();
        Topping(string name, double price);


        string getName();
        double getPrice();

        void setPrice(double price);
        void setName(string name);

        friend ifstream&  operator >> (ifstream& in, Topping& topping);
        friend ofstream&  operator << (ofstream& out, const Topping& topping);


    private:
        int nameLength;
        string name;
        double price;
};

#endif // TOPPING_H
