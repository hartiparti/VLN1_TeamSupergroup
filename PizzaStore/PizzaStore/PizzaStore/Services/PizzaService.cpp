#include "PizzaService.h"

PizzaService::PizzaService()
{
    //ctor
}



vector <Pizza> PizzaService::makePizza()
{
    vector <Pizza> NewPizza;

    string name = "Pizza";
    double price = 1000;

    int tCount = 0;
    int input = 0;

    vector <Topping> selectedToppings;

    cout << " Insert how many toppings you want on the pizza: " << endl;
    cin >> tCount;

    vector <Topping> toppings = toppingrepo.retriveAllToppings();
    for(unsigned int i = 0; i < toppings.size(); i++)
    {
        Topping topping = toppings.at(i);
        cout << "[" << i + 1 << "]" << topping.getName() << " " << topping.getPrice() << " Kr " << endl;
    }


    cout << endl;

    for (unsigned int i = 0; i < tCount; i++)
    {
        cin >> input;
        Topping topping = toppings.at(input - 1);
        cout << "Name: " << topping.getName() << " " << "Price: " << topping.getPrice() << endl;

        selectedToppings.push_back(topping);
    }

        Pizza make_pizza(name, price, tCount, selectedToppings);
        pizzarepo.addPizzasToNewOrder(make_pizza);

        return NewPizza;;
}



void PizzaService::addPizzaToMenu(Pizza pizza)
{
    PizzaRepo pizzaRepo;

    if( isValid(pizza)){
        pizzaRepo.storePizzaToMenu(pizza);
    }
}

vector<Pizza> PizzaService::getPizzasFromMenu(){
    PizzaRepo pizzaRepo;
    return pizzaRepo.retivePizzaFromMenu();
}


vector <Pizza> PizzaService::retrivePizzaForOrder()
{
    PizzaRepo pizzaRepo;
    return pizzaRepo.retrivePizzaForOrder();

}
// TODO
bool PizzaService::isValid(Pizza pizza){
    return true;
}
