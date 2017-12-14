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


void OrderServices::ReadAllOrders()
{
    vector<Order> AllOrders = getlistOfNewOrders();

    if (AllOrders.size() < 1)
    {
        cout << "there is nothing in this vector!";
    }

    for (unsigned int i = 0; i < AllOrders.size(); i++)
    {
        cout << endl;
        Order order = AllOrders.at(i);
        cout << "Order [" << i+1 << "] -- " <<  endl;
        cout << "Name: " << AllOrders.at(i).getCustomerName() << endl;
        cout << "Phone number: " << AllOrders.at(i).getCustomerPhoneNumber() << endl;
        cout << "Price:" << AllOrders.at(i).getTotalPrice() << endl;
        cout << endl;
    }

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
