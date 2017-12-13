#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "Pizza.h"
#include "PizzaRepo.h"
#include "ToppingRepo.h"



using namespace std;

class PizzaService
{
    public:
        PizzaService();
        vector <Pizza> makePizza();

        void addPizzaToMenu(Pizza pizza);
        vector<Pizza> getPizzasFromMenu();

    private:
        bool isValid(Pizza pizza);
        ToppingRepo toppingrepo;
        PizzaRepo pizzarepo;

};

#endif // PIZZASERVICE_H
