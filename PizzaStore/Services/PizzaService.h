#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>

#include "PizzaService.h"
#include "Pizza.h"
#include "PizzaRepo.h"
#include "ToppingRepo.h"



using namespace std;

class PizzaService
{
    public:
        PizzaService();
        vector <Pizza> makePizza();
        void MakePizza2();

        void addPizzaToMenu(Pizza pizza);
        vector<Pizza> getPizzasFromMenu();

        vector <Pizza> retrivePizzaForOrder();

    private:
        bool isValid(Pizza pizza);
        ToppingRepo toppingrepo;
        PizzaRepo pizzarepo;


};

#endif // PIZZASERVICE_H
