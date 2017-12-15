#include "PizzaRepo.h"

PizzaRepo::PizzaRepo()
{

}
/// Add Pizzas to "PizzaForOrder"
void PizzaRepo::addPizzasToNewOrder(Pizza pizza)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt", ios::app);

    fout << pizza;

    fout.close();
}
/// Retrieve pizzas from orders only
vector <Pizza> PizzaRepo::retrivePizzaForOrder(){

    vector<Pizza> PizzaForOrder;
    ifstream fin;
    fin.open("PizzaForOrder.txt");

    if(fin.is_open())
    {
        Pizza p;
        while(fin >> p){
            PizzaForOrder.push_back(p);
        }
        fin.close();
    }

    return PizzaForOrder;
}

/// For adding pizzas to file.
void PizzaRepo::addPizzasTofile(Pizza pizza)
{
    ofstream fout;
    fout.open("pizzas.txt", ios::app);

    fout << pizza;

    fout.close();
}
/// Retrieve all pizzas from repo.
vector<Pizza>PizzaRepo::retriveAllPizzasfromfile()
{
   vector <Pizza> vector_of_pizzas;

    ifstream fin;
    fin.open("pizzas.txt");
    if(fin.is_open())
    {

        Pizza p;
        while(fin >> p)
        {
            vector_of_pizzas.push_back(p);

        }
    }
    else
    {
        cout << "File could not open";
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




