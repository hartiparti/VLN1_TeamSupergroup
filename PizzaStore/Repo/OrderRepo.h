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

        void storeNewOrderToFile(Order order);
        vector <Order> getlistOfNewOrders();
        ///Auka föll
        void storeOrderToFile(Order order);
        void StoreAllOrdersToFile(vector<Order> &orders);
        void storePaidOrders(Order order);


    private:

};

#endif // ORDERREPO_H
