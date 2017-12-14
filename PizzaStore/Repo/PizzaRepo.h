#ifndef PIZZAREPO_H
#define PIZZAREPO_H

#include <fstream>
#include <iostream>
#include <vector>
#include <string>

#include "Pizza.h"

using namespace std;

class PizzaRepo
{
    public:
        PizzaRepo();
        /// Föll sem við erum að nota.
        void addPizzasToNewOrder(Pizza pizza);
        vector <Pizza>retrivePizzaForOrder();
        void addPizzasToReady(Pizza pizza);
        /// Föll fyrir menu.
        void storePizzaToMenu(Pizza pizza);
        vector<Pizza> retivePizzaFromMenu();
        /// Föll ef við viljum skrifa pizza í skrá.
        void addPizzasTofile(Pizza pizza);
        vector<Pizza> retriveAllPizzasfromfile();

    private:
};

#endif // PIZZAREPO_H
