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
        void addNewOrdersToFile(Order order);
        void MakeOrder();


    private:
        PizzaService pizzaService;
        PizzaRepo pizzaRepo;
        Order order;
        OrderRepo orderRepo;

};

#endif // ORDERSERVICES_H
