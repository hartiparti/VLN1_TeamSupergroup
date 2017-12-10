#include "PizzaServices.h"
#include "vector"
#include <iostream>
#include <stdlib.h>
using namespace std;

PizzaServices::PizzaServices()
{
    //ctor
}

void PizzaServices::make_pizza(){

    vector<Topping> select_toppings = toppingrepo.retriveToppings();
    Pizza pizza;

    int selection = -1;
    while (selection != 0){
        system("CLS");
        cout << "---   Enter id to add toppings, choose 0 to finish making the pizza  --- ";
        cout <<  endl << endl;
        for(unsigned int i = 0; i < select_toppings.size(); i++) {
        cout << "[" << i + 1 << "]" << select_toppings[i] << endl;
        }
        cout << endl;
        cin >> selection;
        if(selection > 0 && selection <= (int)select_toppings.size()){
            pizza.addTopping(select_toppings[selection - 1]);
        }

        }
        pizzarepo.storePizza(pizza);
        system("CLS");
        cout << "This is your pizza:" << endl;
        cout << pizza;
        cout << endl;
        system("Pause");

}
