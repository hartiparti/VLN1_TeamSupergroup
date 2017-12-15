#include "PizzaService.h"

PizzaService::PizzaService()
{
    //ctor
}


/// Primary function to make Pizza, stores the information in the Data Access layer.
vector <Pizza> PizzaService::makePizza()
{
    vector <Pizza> NewPizza;

    string name = "Pizza";


    int tCount = 0;
    int input = 0;
    int status = 0;

    vector <Topping> selectedToppings;
    cout << endl << endl;
    cout <<"Insert how many toppings you want on the pizza " << endl;
    cin >> tCount;
    system("CLS");
    cout <<"  -- Here is the list of all available toppings -- ";
    cout << endl;
    vector <Topping> toppings = toppingrepo.retriveAllToppings();
    for(unsigned int i = 0; i < toppings.size(); i++)
    {
        Topping topping = toppings.at(i);
        cout << "[" << i + 1 << "]" << topping.getName() << " " << topping.getPrice() << " Kr " << endl;
    }


    for (unsigned int i = 0; i < tCount; i++)
    {
        cin >> input;
        cout << endl;
        cout << endl;
        Topping topping = toppings.at(input - 1);
        selectedToppings.push_back(topping);
    }
    system("CLS");

    double totalSum = 1000;
    cout << "      You've chosen a pizza with: " << endl;
    for (unsigned int i = 0; i < selectedToppings.size(); i++)
    {
        Topping topping = selectedToppings.at(i);
        cout << " -- " << topping.getName() << endl;
        totalSum +=topping.getPrice();

    }
    cout << "    Total price: " << totalSum << endl;
    cout << "                -------" << endl;


        Pizza make_pizza(name, totalSum, tCount, selectedToppings, status);
        pizzarepo.addPizzasToNewOrder(make_pizza);
        pizzarepo.addPizzasTofile(make_pizza);
        system("PAUSE");
        return NewPizza;;
}

/// Gateway to add Pizzas to menu.
void PizzaService::addPizzaToMenu(Pizza pizza)
{
    PizzaRepo pizzaRepo;

    if( isValid(pizza)){
        pizzaRepo.storePizzaToMenu(pizza);
    }
}
/// Retrieve only menu pizzas.
vector<Pizza> PizzaService::getPizzasFromMenu(){
    PizzaRepo pizzaRepo;
    return pizzaRepo.retivePizzaFromMenu();
}

/// Retrieve only menu pizzas.
vector <Pizza> PizzaService::retrivePizzaForOrder()
{
    PizzaRepo pizzaRepo;
    return pizzaRepo.retrivePizzaForOrder();

}
/// Should be more function for validating a pizza.
bool PizzaService::isValid(Pizza pizza){
    return true;
}
