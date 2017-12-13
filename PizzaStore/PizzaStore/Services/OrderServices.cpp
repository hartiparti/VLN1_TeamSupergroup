#include "OrderServices.h"

OrderServices::OrderServices()
{

}



void OrderServices::addOrdersToFile(Order order)
{
   OrderRepo orderRepo;
   orderRepo.storeOrderToFile(order);

   /* if( isValid(Order)){
        pizzaRepo.storePizzaToMenu(pizza);
    }*/
}


void OrderServices::makeOrder(){

    cout << "Welcome please make an order: " << endl;
    vector<Order> newOrders;
    string name;
    string phonenumber;
    double price = 0.0;

    cout << "Name: ";
    cin >> name;
    cout << "Phonenumber: ";
    cin >> phonenumber;

    unsigned int PizzaCount;
    cout << "How many pizzas? ";

    cin >> PizzaCount;
    for (int i = 0; i < PizzaCount; i++)
    {

        pizzaservice.makePizza();
    //vector<Order> newOrders = pizzaService.make
    }

    try
    {
            //addOrdersToFile(Order order)(order);
    }

    catch(exception ex)
    {
        cout << "Unable to add Pizza to Repository" << endl;
    }

}
















