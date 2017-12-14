#include "ToppingRepo.h"

ToppingRepo::ToppingRepo()
{

}
/// Óþarfa fall
/*
void ToppingRepo::addToToppings(Topping &topping)
{
    vector<Topping> toppingList = retriveAllToppings();
    toppingList.push_back(topping);
    storeAllToppings(toppingList);
}
*/

// Store all toppings.
void ToppingRepo::storeAllToppings(vector<Topping> &toppings)
{
    ofstream fout;
    fout.open("topping.txt",ios::app);
    fout << toppings.size();
    for(unsigned int i = 0; i < toppings.size(); i++)
    {
        fout << toppings[i];
    }
    fout.close();
}
// Get all toppings.
vector<Topping> ToppingRepo::retriveAllToppings()
{
    vector<Topping> toppings;
    ifstream fin;
    fin.open("topping.txt");

    if(fin.is_open())
    {

        Topping t;
        while(fin >> t)
        {
            toppings.push_back(t);

        }
    }
    else
    {
        cout << "Error";

    }

    fin.close();

    return toppings;
}

