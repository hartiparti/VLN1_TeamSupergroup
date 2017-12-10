#include "RegisterServices.h"

RegisterServices::RegisterServices()
{
    //ctor
}






vector <Order> RegisterServices::readOrders(){

    vector<Order> orders = orderrepo_list_orders.retriveOrders();

    return orders;

}



