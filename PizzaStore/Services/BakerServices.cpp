#include "BakerServices.h"


BakerServices::BakerServices()
{
    //ctor
}



void BakerServices::showMenuPizzas()
 {
    PizzaService pizzaService;
    vector<Pizza> myMenuPizzas =  pizzaService.getPizzasFromMenu();
    for(int i = 0; i < myMenuPizzas.size(); i++)
    {
        cout << "Pizza nr. " << i+1 << endl;
        cout << myMenuPizzas.at(i).getName() << " Price: " << myMenuPizzas.at(i).getPrice() << endl;

    }
 }
void BakerServices::showNewOrderPizzas()
{
    vector <Pizza> ListOfPizzas = pizzaRepo.retriveAllPizzasfromfile();

    if (ListOfPizzas.size() == 0)
    {
        cout << "No new orders!";
    }
    else
    {
        for (unsigned int i = 0; i < ListOfPizzas.size(); i++)
        {
            cout << "Pizza nr. " << i+1 << endl;
            cout << "       " << ListOfPizzas.at(i).getName() << " Price: " << ListOfPizzas.at(i).getPrice();
            cout << "                                        " << ListOfPizzas.at(i).getStatus();
            cout << endl;
        }
    }


}






