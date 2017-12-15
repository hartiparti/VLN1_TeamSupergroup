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
        /// Föll sem við erum að nota.
        void addPizzasToNewOrder(Pizza pizza);
        vector <Pizza>retrivePizzaForOrder();

        /// Föll fyrir menu.
        void storePizzaToMenu(Pizza pizza);
        vector<Pizza> retivePizzaFromMenu();
        /// Föll ef við viljum skrifa pizza í skrá.
        void addPizzasTofile(Pizza pizza);
        vector<Pizza> retriveAllPizzasfromfile();

        void updateStatusOfNextPizza();

    private:
};

#endif // PIZZAREPO_H
