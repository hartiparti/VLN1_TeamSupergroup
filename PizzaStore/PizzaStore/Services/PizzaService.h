#ifndef PIZZASERVICE_H
#define PIZZASERVICE_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "Pizza.h"
#include "PizzaRepo.h"

using namespace std;

class PizzaService
{
    public:
        PizzaService();
        virtual ~PizzaService();
        void addPizzaToMenu(Pizza pizza);
        vector<Pizza> getPizzasFromMenu();

    protected:

    private:
        bool isValid(Pizza pizza);
};

#endif // PIZZASERVICE_H
