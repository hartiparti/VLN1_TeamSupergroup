#include "ToppingRepo.h"

ToppingRepo::ToppingRepo()
{

}

/// Function for storing all custom made toppings, in the Data Access layer.
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
/// Function to retrieve all toppings.
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

