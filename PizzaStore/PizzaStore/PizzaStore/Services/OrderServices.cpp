#include "OrderServices.h"

OrderServices::OrderServices()
{

}


void OrderServices::addNewOrdersToFile(Order order)
{
   orderRepo.storeNewOrderToFile(order);

}


void OrderServices::MakeOrder()
{
    cout << "Welcome please make an order: " << endl;

    Order order;

    int orderNumber = 0;
    string Name;
    string Phonenumber;
    int PizzaCount;
    vector <Order> newOrder;
    double Price = 0.0;

    cout << "Name: ";
    cin >> Name;

    cout << "Phonenumber: ";
    cin >> Phonenumber;

    cout << "How many pizzas? ";
    cin >> PizzaCount;

    for (int i = 0; i < PizzaCount; i++)
    {
        pizzaService.makePizza();
    }

    vector<Pizza> NewPizzas = pizzaRepo.retrivePizzaForOrder();
    order.setPizzas(NewPizzas);
    order.setTotalPrice(Price);
    order.setCustomerName(Name);
    order.setOrderNumber(orderNumber);
    order.setCustomerPhoneNumber(Phonenumber);
    order.setPizzaCount(PizzaCount);

    Order makeOrder (orderNumber, Name, Phonenumber, PizzaCount, Price, NewPizzas);


    try
    {

         addNewOrdersToFile(makeOrder);

    }
    catch(exception ex)
    {
        cout << "Unable to add Pizza to Repository" << endl;
    }

    NewPizzas.clear();
}














