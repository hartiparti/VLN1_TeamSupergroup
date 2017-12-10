#include "OrderServices.h"
#include "PizzaServices.h"
OrderServices::OrderServices()
{
    //ctor
}

OrderServices::~OrderServices()
{
    //dtor
}


void OrderServices::make_order(){

    vector <Order> orders = orderrepo.retriveOrders();
    Order order;

    int count_of_orders;
    cout << "Enter how many orders you want to make: ";
    cin >> count_of_orders;

    for(int i = 0; i < count_of_orders; i++){
        cin >> order;
        makepizza.make_pizza();
        Pizza pizza;
        order.addPizza(pizza);
        orders.push_back(order);
    }
        orderrepo.storeOrders(orders);

}



