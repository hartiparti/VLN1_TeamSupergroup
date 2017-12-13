#ifndef ORDERSCREENUI_H
#define ORDERSCREENUI_H

#include "MainUI.h"
#include "OrderServices.h"
#include "PizzaService.h"

#include "iostream"
#include "stdlib.h"
using namespace std;

class OrderScreenUI
{
    public:
        OrderScreenUI();
        void OrderMenu();

        void printOrderMenu();
        void printOrderPizza();

        void MakeOrder();



    private:

        PizzaService pizzaservice;
        OrderServices orderservices;
};

#endif // ORDERSCREENUI_H
