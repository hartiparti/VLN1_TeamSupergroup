#include "AdminServices.h"

AdminServices::AdminServices()
{

}

void AdminServices::displayAllToppings()
{

    vector <Topping> toppings = toppingrepo.retriveAllToppings();

    if (toppings.size() < 1)
    {
        cout << "there is nothning in this vector!";
    }

    for (unsigned int i = 0; i < toppings.size(); i++)
    {
        cout << endl;
        Topping topping = toppings.at(i);
        cout << "Item number [" << i+1 << "] -- " <<  endl;
        cout << "Name: " << topping.getName() << endl;
        cout << "Price: " << topping.getPrice() << endl;
        cout << endl;
    }

}

void AdminServices::addToToppings()
{
    vector<Topping> toppings;
    Topping topping;

    int add_to_topping;
    cout << " How many toppings would you like to add? ";
    cout << endl;
    cin >> add_to_topping;

    for(int i = 0; i < add_to_topping; i++)
    {
        string Name;
        double Price;
        cout << "Name: ";
        cin >> Name;
        topping.setName(Name);

        cout << "Price: ";
        cin >> Price;

        topping.setPrice(Price);
        toppings.push_back(topping);
    }

    toppingrepo.storeAllToppings(toppings);
}
