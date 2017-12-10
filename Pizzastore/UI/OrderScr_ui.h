#ifndef ORDERSCR_UI_H
#define ORDERSCR_UI_H


#include "PizzaServices.h"
#include "OrderServices.h"
#include "iostream"
#include "stdlib.h"
using namespace std;
class OrderScr_ui
{
    public:
        OrderScr_ui();
        void order_menu();
        void Store();

        void PrintStoreTitle();         /// Eins og er "lausn" á fleiri en einum stað.
        void order_pizza();


    private:
        OrderServices Orderservice;
        PizzaServices Pizzaservice;
};

#endif // ORDERSCR_UI_H
