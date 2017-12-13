#include "OrderServices.h"

OrderServices::OrderServices()
{

}


void OrderServices::addNewOrdersToFile(Order order)
{
   orderRepo.storeNewOrderToFile(order);

}

vector<Order> OrderServices::getlistOfNewOrders()
{
    OrderRepo orderRepo;
    return orderRepo.getlistOfNewOrders();
}


void OrderServices::MakeOrder()
{
    cout << endl << endl;
    cout << "Please fill in the following information. " << endl;

    Order order;

    int orderNumber = 0;
    string Name;
    string Phonenumber;
    int PizzaCount;
    vector <Order> newOrder;
    double Price = 0.0;
    cout << endl << endl;
    cout << "Insert the customer name: ";
    cin >> Name;
    cout << endl;
    cout << "Insert a phonenumber: ";
    cin >> Phonenumber;
    cout << endl;
    cout << "How many pizzas, would that be?  ";
    cin >> PizzaCount;

    for (int i = 0; i < PizzaCount; i++)
    {
        pizzaService.makePizza();
    }

    vector<Pizza> NewPizzas = pizzaRepo.retrivePizzaForOrder();


    Order makeOrder (orderNumber, Name, Phonenumber, PizzaCount, Price, NewPizzas);


    try
    {

         addNewOrdersToFile(makeOrder);

    }
    catch(exception ex)
    {
        cout << " Unable to add Order to Repository " << endl;
    }

    NewPizzas.clear();
}














