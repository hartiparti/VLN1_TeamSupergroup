#ifndef PIZZAREPO_H
#define PIZZAREPO_H

#include <fstream>
#include <iostream>
#include <vector>

#include "Pizza.h"

using namespace std;

class PizzaRepo
{
    public:
        PizzaRepo();
        /// F�ll sem vi� erum a� nota.
        void addPizzasToNewOrder(Pizza pizza);
        vector <Pizza>retrivePizzaForOrder();

        /// F�ll fyrir menu.
        void storePizzaToMenu(Pizza pizza);
        vector<Pizza> retivePizzaFromMenu();
        /// F�ll ef vi� viljum skrifa pizza � skr�.
        void addPizzasTofile(Pizza pizza);
        vector<Pizza> retriveAllPizzasfromfile();

        void updateStatusOfNextPizza();

    private:
};

#endif // PIZZAREPO_H
