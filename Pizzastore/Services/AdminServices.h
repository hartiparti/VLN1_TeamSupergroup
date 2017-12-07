#ifndef ADMINSERVICES_H
#define ADMINSERVICES_H
#include <vector>

#include "Toppingrepo.h"
#include "Pizzarepo.h"
#include "Topping.h"
#include "Pizza.h"
#include "Order.h"

class AdminServices
{
    public:
        AdminServices();

        void readToppings();
        void addToppings();



    private:
        Pizzarepo list_of_pizzas;
        Toppingrepo list_of_toppings;
};

#endif // ADMINSERVICES_H
