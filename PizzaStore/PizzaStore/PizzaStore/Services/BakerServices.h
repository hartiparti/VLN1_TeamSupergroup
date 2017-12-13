#ifndef BAKERSERVICES_H
#define BAKERSERVICES_H

#include "Order.h"
#include "OrderRepo.h"
#include "PizzaRepo.h"
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
        vector<Order> getlistOfNewOrders();

        void showAllPizzas();

    private:

        OrderRepo orderrepo;
        PizzaRepo pizzarepo;
};

#endif // BAKERSERVICES_H
