#include "RegisterServices.h"

RegisterServices::RegisterServices()
{
    //ctor
}


vector <Order> RegisterServices::readOrders(){

    vector<Order> orders = orderrepo.retriveOrders();

    return orders;

}



