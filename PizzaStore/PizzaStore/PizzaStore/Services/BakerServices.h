#ifndef BAKERSERVICES_H
#define BAKERSERVICES_H

#include "Order.h"
#include "OrderRepo.h"
#include "PizzaRepo.h"
#include "OrderServices.h"
#include "PizzaService.h"
#include "Pizza.h"
#include "stdlib.h"
#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

class BakerServices
{
    public:
        BakerServices();
        void showMenuPizzas();
        void showAllPizzasFromOrders();
        void showAllPizzas();
        void showNewOrderPizzas();

    private:

        OrderRepo orderRepo;
        PizzaRepo pizzaRepo;
};

#endif // BAKERSERVICES_H
