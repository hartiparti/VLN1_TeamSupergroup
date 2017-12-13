#include "OrderServices.h"

OrderServices::OrderServices()
{

}

void OrderServices::makeOrder(){

    int numberOfPizzas;
    string name, phoneNumber;

    cout << "Enter how many pizzas you want to order: ";
    cin >> numberOfPizzas;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Phone number: ";
    cin >> phoneNumber;

    order.setPizzaCount(numberOfPizzas);
    order.setCustomerName(name);
    order.setCustomerPhoneNumber(phoneNumber);

    int orderNumber = 0;
    order.setOrderNumber(orderNumber);

    vector<Pizza> pizzas = makePizza();
    Pizza nextPizza;

    double totalCost = 0;

    for(int i = 0; i < numberOfPizzas; i++)
    {
        pizzas.push_back(nextPizza);
        totalCost += nextPizza.getPrice();
    }

    order.setPizzas(pizzas);
    order.setTotalPrice(totalCost);

    system("CLS");
    cout << "This is your order" << endl;

    cout << "------------------" << endl;


    cout << "-------------------" << endl;
    cout << "Total price: " << order.getTotalPrice() << endl;

    system("Pause");

    orderrepo.addOrderTofile(order);

}



vector <Pizza> OrderServices::makePizza()
{
    vector <Pizza> Ordered_Pizza;

    string name = "Pizza";
    double price = 1000;

    vector <Topping> selectedToppings;

    vector <Topping> toppings = toppingrepo.retriveAllToppings();
    for(unsigned int i = 0; i < toppings.size(); i++)
    {
        Topping topping = toppings.at(i);
        cout << "[" << i + 1 << "]" << topping.getName() << " " << topping.getPrice() << " Kr " << endl;
    }

    int tCount = 0;
    int input = 0;
    cout << endl;

    cout << " Insert how many toppings you want on the pizza: " << endl;

    cin >> tCount;
    for (unsigned int i = 0; i < tCount; i++)
    {
        cin >> input;
        Topping topping = toppings.at(input - 1);
        cout << "Name: " << topping.getName() << " " << "Price: " << topping.getPrice() << endl;

        selectedToppings.push_back(topping);
    }

        Pizza make_pizza(name, price, tCount, selectedToppings);
        pizzarepo.addPizzasTofile(make_pizza);

        return Ordered_Pizza;
}



