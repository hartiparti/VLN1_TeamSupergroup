#ifndef ORDERSERVICES_H
#define ORDERSERVICES_H

#include <iostream>
#include <vector>
#include <iostream>
#include <stdlib.h>


#include "ToppingRepo.h"
#include "PizzaRepo.h"

#include "Order.h"
#include "Topping.h"
#include "ToppingRepo.h"
#include "OrderRepo.h"
#include <vector>
#include <iostream>
using namespace std;

class OrderServices
{
    public:
        OrderServices();

        vector <Pizza> makePizza();

        void makeOrder();

    private:

        ToppingRepo toppingrepo;
        PizzaRepo pizzarepo;
        Order order;
        OrderRepo orderrepo;
};

#endif // ORDERSERVICES_H
