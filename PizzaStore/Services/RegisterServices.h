#ifndef REGISTERSERVICES_H
#define REGISTERSERVICES_H

#include "OrderRepo.h"
#include "Order.h"

#include <stdlib.h>
#include <string>
#include <iostream>
#include <Vector>

using namespace std;

class RegisterServices
{
    public:
        RegisterServices();
        void getNewOrder();
        vector<Order>findNewOrder(string input);



    private:
        OrderRepo orderRepo;

};

#endif // REGISTERSERVICES_H
