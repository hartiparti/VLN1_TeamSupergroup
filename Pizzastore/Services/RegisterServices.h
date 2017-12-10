#ifndef REGISTERSERVICES_H
#define REGISTERSERVICES_H
#include "Orderrepo.h"
#include "Order.h"



class RegisterServices
{
    public:
        RegisterServices();
        vector <Order> readOrders();
        void test();

    private:
        Orderrepo orderrepo_list_orders;
};

#endif // REGISTERSERVICES_H
