#include "AdminServices.h"

AdminServices::AdminServices()
{

}


void AdminServices::readToppings(){                                             /// AdminService talar svo við Data_Access layer, sækir það sem er í Vectornum þar.

    vector<Topping> toppings = list_of_toppings.retriveToppings();
    for (unsigned int i = 0; i < toppings.size(); i++){
            cout << endl;
            cout << "Item number [" << i+1 << "] -- " << toppings[i];           /// Prenta "i + 1" til að gefa hverju topping ID.

    }

}

void AdminServices::addToppings(){

    vector<Topping> toppings = list_of_toppings.retriveToppings();               /// AdminService talar við Data_Access til þess að skrifa í repo.
    Topping topping;

    int add_to_topping;

    cin >> add_to_topping;

    for(int i = 0; i < add_to_topping; i++){
        cin >> topping;
        toppings.push_back(topping);
        }

    list_of_toppings.storeToppings(toppings);


}
