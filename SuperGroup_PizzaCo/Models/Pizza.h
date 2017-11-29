#ifndef PIZZA_H
#define PIZZA_H
#include "Topping.h"
#include <iostream>
using namespace std;

class Pizza
{
    public:
        Pizza();
        Pizza(int nr_of_toppings);
        void add_topping_to_pizza(Topping topping);
        void initialize(int nr_of_toppings);
        void clean_memory();

        friend ostream& operator << (ostream& out, const Pizza& pizza);
        friend istream& operator >> (istream& in, Pizza& pizza);
        ~Pizza();

    private:
      Topping *toppings;          /// Hérna gæti verið stærð.
      int count_of_toppings;      /// Hversu margar toppings.
      int current_nr_of_toppings;
};

#endif // PIZZA_H
