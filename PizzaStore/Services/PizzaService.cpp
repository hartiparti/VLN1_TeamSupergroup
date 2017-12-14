#include "PizzaService.h"

PizzaService::PizzaService()
{
    //ctor
}


// Primary function so the user can make Pizza from admin made toppings.
vector <Pizza> PizzaService::makePizza()
{
    vector <Pizza> NewPizza;

    string name = "Pizza";

    int tCount = 0;
    int input = 0;

    vector <Topping> selectedToppings;
    cout << endl;
    cout <<"Insert how many toppings you want on the pizza " << endl;
    cin >> tCount;
    cout <<"  -- Here is the list of all available toppings -- ";
    cout << endl;
    vector <Topping> toppings = toppingrepo.retriveAllToppings();
    for(unsigned int i = 0; i < toppings.size(); i++)
    {
        Topping topping = toppings.at(i);
        cout << "[" << i + 1 << "]" << topping.getName() << " " << topping.getPrice() << " Kr " << endl;
    }
    cout << endl;

    double totalSum = 1000;

    for (unsigned int i = 0; i < tCount; i++)
    {
        cin >> input;
        Topping topping = toppings.at(input - 1);
        selectedToppings.push_back(topping);
    }
    cout << "You've chosen a pizza with: ";
    for (unsigned int i = 0; i < selectedToppings.size(); i++)
    {
        Topping topping = selectedToppings.at(i);
        cout << topping.getName() << " & ";
        totalSum += topping.getPrice();
    }
        cout << endl;
        cout << " ---------- " << endl;

        cout << "Total Price: " << totalSum << endl;

        Pizza make_pizza(name, totalSum, tCount, selectedToppings);
        pizzarepo.addPizzasToNewOrder(make_pizza);
        pizzarepo.addPizzasTofile(make_pizza);
        system("PAUSE");
        return NewPizza;;
}

// Simply add pizzas to menu, needs validation.
void PizzaService::addPizzaToMenu(Pizza pizza)
{
    PizzaRepo pizzaRepo;

    if( isValid(pizza)){
        pizzaRepo.storePizzaToMenu(pizza);
    }
}
// Get only menu pizzas from DataAccess layer.
vector<Pizza> PizzaService::getPizzasFromMenu()
{
    PizzaRepo pizzaRepo;
    return pizzaRepo.retivePizzaFromMenu();
}
// Get all pizzas from DataAccess layer
vector <Pizza> PizzaService::getAllPizzas()
{
    PizzaRepo pizzaRepo;
    return pizzaRepo.retriveAllPizzasfromfile();
}
// Get only pizzas, made with orders DataAccess layer
vector <Pizza> PizzaService::retrivePizzaForOrder()
{
    PizzaRepo pizzaRepo;
    return pizzaRepo.retrivePizzaForOrder();

}
// TODO Validate all pizzas.
bool PizzaService::isValid(Pizza pizza){
    return true;
}
