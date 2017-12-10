#ifndef PIZZASERVICES_H
#define PIZZASERVICES_H

#include "Pizzarepo.h"
#include "toppingrepo.h"
#include "Pizza.h"

class PizzaServices
{
    public:
        PizzaServices();
        void make_pizza();




    private:
        Pizza pizza;
        Pizzarepo pizzarepo;
        Toppingrepo toppingrepo;
};

#endif // PIZZASERVICES_H
