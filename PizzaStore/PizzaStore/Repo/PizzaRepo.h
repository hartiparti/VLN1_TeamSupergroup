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

        void addPizzasTofile(Pizza pizza);

        vector<Pizza> retriveAllPizzasfromfile();

    private:
};

#endif // PIZZAREPO_H
