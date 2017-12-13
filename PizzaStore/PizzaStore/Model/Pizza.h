#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <fstream>
#include <stddef.h>
#include <vector>

#include "Topping.h"

using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(string name, double price, int toppingsCount, vector<Topping> toppings);

        string getName();
        double getPrice();

        void setName(string name);
        void setPrice(double price);
        void addTopping(Topping topping);

        friend ifstream& operator >> (ifstream& fin, Pizza& pizza);
        friend ofstream& operator << (ofstream& fout, const Pizza& pizza);

    private:

        string name;
        double price;
        int toppingsCount;
        vector<Topping> toppings;
};
#endif // PIZZA_H
