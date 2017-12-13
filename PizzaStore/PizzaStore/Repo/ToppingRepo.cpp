#include "ToppingRepo.h"

ToppingRepo::ToppingRepo()
{

}

void ToppingRepo::addToToppings(Topping &topping)
{
    vector<Topping> toppingList = retriveAllToppings();
    toppingList.push_back(topping);
    storeAllToppings(toppingList);
}

void ToppingRepo::storeAllToppings(vector<Topping> &toppings)
{
    ofstream fout;
    fout.open("topping.txt", ios::app);
    fout << toppings.size();
    for(unsigned int i = 0; i < toppings.size(); i++)
    {
        fout << toppings[i];
    }
    fout.close();
}

vector<Topping> ToppingRepo::retriveAllToppings()
{
    vector<Topping> toppings;
    ifstream fin;
    fin.open("topping.txt");

    if(fin.is_open())
    {
        int counter = 0; //ERROR CHEACK
        Topping t;
        while(fin >> t)
        {
            toppings.push_back(t);
            counter++;
        }

    }
    else
    {
        cout << "Error";

    }

    fin.close();

    return toppings;
}


/*
{   vector<Topping> toppings;

    ifstream fin;
    fin.open("topping.txt");

    if(fin.is_open())
    {
        fin >> toppingCount; //ERROR CHEACK
        for(int i = 0; i < toppingCount; i++)
        {
            Topping t;
            fin >> t;
            toppings.push_back(t);
        }
    }

    fin.close();

    return toppings;
}*/
