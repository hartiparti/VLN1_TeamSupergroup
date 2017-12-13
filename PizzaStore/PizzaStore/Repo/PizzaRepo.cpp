#include "PizzaRepo.h"

PizzaRepo::PizzaRepo()
{

}

void PizzaRepo::addPizzasTofile(Pizza pizza)
{
    ofstream fout;
    fout.open("pizzas.txt", ios::app);

    fout << pizza;

    fout.close();
}

vector<Pizza>PizzaRepo::retriveAllPizzasfromfile()
{
   vector <Pizza> vector_of_pizzas;

    ifstream fin;
    fin.open("pizzas.txt");
    if(fin.is_open())
    {
        int counter = 0;
        Pizza p;
        while(fin >> p)
        {
            vector_of_pizzas.push_back(p);
            counter++;
        }
    }
    else
    {
        cout << "Error";
    }

    fin.close();
    return vector_of_pizzas;
}

void PizzaRepo::storePizzaToMenu(Pizza pizza)
{
    ofstream fout;
    fout.open("menuOfPizzas.txt", ios::app);
    if(fout.is_open())
    {
        fout << pizza;
        fout.close();
    }
}

vector<Pizza> PizzaRepo::retivePizzaFromMenu()
{
    vector<Pizza> myMenuPizzas;
    ifstream fin;
    fin.open("menuOfPizzas.txt");

    if(fin.is_open())
    {
        Pizza p;
        while(fin >> p){
            myMenuPizzas.push_back(p);
        }
        fin.close();
    }

    return myMenuPizzas;
}



