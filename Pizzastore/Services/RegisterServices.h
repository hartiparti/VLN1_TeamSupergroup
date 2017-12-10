#ifndef REGISTERSERVICES_H
#define REGISTERSERVICES_H
#include "Orderrepo.h"
#include "Order.h"



class RegisterServices
{
    public:
        RegisterServices();
        vector <Order> readOrders();


    private:
        Orderrepo orderrepo;
};

#endif // REGISTERSERVICES_H
