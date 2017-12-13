#ifndef ORDERREPO_H
#define ORDERREPO_H

#include <fstream>
#include <iostream>
#include <vector>

#include "Order.h"
#include "Pizza.h"

using namespace std;

class OrderRepo
{
    public:
        OrderRepo();

        void addOrderTofile(Order order);
        vector <Order> retriveAllOrders();

    private:

};

#endif // ORDERREPO_H
