#ifndef ORDERSERVICES_H
#define ORDERSERVICES_H
#include "PizzaServices.h"
#include "Order.h"
#include "Orderrepo.h"

class OrderServices
{
    public:
        OrderServices();
        virtual ~OrderServices();
        void make_order();


    private:

        PizzaServices makepizza;
        Order order;
        Orderrepo orderrepo;
};

#endif // ORDERSERVICES_H
