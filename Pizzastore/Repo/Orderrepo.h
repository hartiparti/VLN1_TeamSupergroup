#ifndef ORDERREPO_H
#define ORDERREPO_H
#include <vector>
#include "Order.h"
#include <fstream>
using namespace std;


class Orderrepo
{
    public:
        Orderrepo();
        void storeOrders(const vector<Order> &orders);
        vector<Order> retriveOrders();



    private:
};

#endif // ORDERREPO_H
