#include "BakerServices.h"

BakerServices::BakerServices()
{
    //ctor
}

void BakerServices::showAllPizzas()
 {
    vector <Pizza> pizzas = pizzarepo.retriveAllPizzasfromfile();
    if (pizzas.size() == 0 )
    {
        cout << "no!";
    }
    for (unsigned int i = 0; i < pizzas.size(); i++)
    {
        cout << endl;
        Pizza pizza = pizzas.at(i);
        cout << "Pizza nr: [" << i+1 << "] -- " <<  endl;
        cout << "Name: "  <<     pizza.getName() << endl;
        cout << "Price: " <<    pizza.getPrice() << endl;
        cout << endl;
    }
 }
