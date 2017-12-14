#ifndef ADMINSERVICES_H
#define ADMINSERVICES_H

#include <fstream>
#include "Topping.h"
#include "Toppingrepo.h"
#include <vector>
#include <iostream>

class AdminServices
{
    public:
        AdminServices();

        void displayAllToppings();
        void addToToppings();

    private:
        ToppingRepo toppingrepo;
};

#endif // ADMINSERVICES_H
