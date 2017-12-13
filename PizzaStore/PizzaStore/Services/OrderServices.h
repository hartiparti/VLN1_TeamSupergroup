#ifndef ORDERSERVICES_H
#define ORDERSERVICES_H

#include <iostream>
#include <vector>
#include <iostream>
#include <stdlib.h>


#include "ToppingRepo.h"
#include "PizzaRepo.h"
#include "OrderRepo.h"

#include "Order.h"
#include "Topping.h"
#include "ToppingRepo.h"
#include "PizzaService.h"

#include <vector>
#include <iostream>
using namespace std;

class OrderServices
{
    public:
        OrderServices();

        vector <Pizza> makePizza();
        void addOrdersToFile(Order order);

        void makeOrder();

    private:
        PizzaService pizzaservice;
        ToppingRepo toppingrepo;
        PizzaRepo pizzarepo;
        Order order;
        OrderRepo orderrepo;
};

#endif // ORDERSERVICES_H
