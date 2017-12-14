#include "BakerServices.h"

BakerServices::BakerServices()
{
    //ctor
}

// Show all menu made Pizzas.
void BakerServices::showMenuPizzas()
{
    PizzaService pizzaService;
    vector<Pizza> myMenuPizzas =  pizzaService.getPizzasFromMenu();
    for(unsigned int i = 0; i < myMenuPizzas.size(); i++)
    {
        cout << "Pizza nr. " << i+1 << endl;
        cout << myMenuPizzas.at(i).getName() << " Price: " << myMenuPizzas.at(i).getPrice() << endl;
    }
 }

// Show all Pizzas.
void BakerServices::showAllPizzas()
{
    PizzaService pizzaService;
    vector <Pizza> ListOfAllPizzas = pizzaService.getAllPizzas();
    Pizza pizza;
    if (ListOfAllPizzas.size() == 0)
    {
        cout << "There are no pizzas to make";
    }

    for(unsigned int i = 0; i < ListOfAllPizzas.size(); i++)
    {
        Pizza pizza = ListOfAllPizzas.at(i);
        cout << "Pizza nr: " << i + 1 << endl;
        cout << pizza.getName();
        cout << pizza.getPrice();
    }

}

// Show all Pizzas for Order.
void BakerServices::showAllPizzasFromOrders()
{
    OrderServices orderSevices;
    PizzaService pizzaService;
    vector <Pizza> ListOfAllPizzas = pizzaService.getAllPizzas();


    pizzaService.retrivePizzaForOrder();
    Order order;
    Pizza pizza;
    order.setPizzas(ListOfAllPizzas);

    if (ListOfAllPizzas.size() == 0)
    {
        cout << "   There are no pizzas to make     ";
    }
    for(unsigned int i = 0; i < ListOfAllPizzas.size(); i++)
    {
        cout << "Pizza nr. " << i+1 << endl;
        cout << pizza.getName();

    }

}

