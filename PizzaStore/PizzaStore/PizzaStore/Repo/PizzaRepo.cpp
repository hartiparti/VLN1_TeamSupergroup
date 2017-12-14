#include "PizzaRepo.h"

PizzaRepo::PizzaRepo()
{

}
///Það sem við erum að nota.

void PizzaRepo::addPizzasToReady(Pizza pizza)
{
    ofstream fout;
    fout.open("PizzasOrderReady.txt", ios::app);

    fout << pizza;

    fout.close();

}

void PizzaRepo::addPizzasToNewOrder(Pizza pizza)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt", ios::app);

    fout << pizza;

    fout.close();
}

///Erum að nota til að sækja pizza fyrir order.
vector <Pizza> PizzaRepo::retrivePizzaForOrder(){

    vector<Pizza> PizzaForOrder;
    ifstream fin;
    fin.open("PizzaForOrder.txt");

    if(fin.is_open())
    {
        Pizza p;
        while(!fin.eof()){
            fin >> p;
            PizzaForOrder.push_back(p);
        }
        fin.close();
    }

    return PizzaForOrder;
}

/// Auka föll, til að adda t.d pizzu.

void PizzaRepo::addPizzasTofile(Pizza pizza)
{
    ofstream fout;
    fout.open("pizzas.txt", ios::app);

    fout << pizza;

    fout.close();
}
/// Auka fall til að sækja allar pizzur.
vector<Pizza>PizzaRepo::retriveAllPizzasfromfile()
{
    vector <Pizza> AllPizzas;
    ifstream fin;
    fin.open("pizzas.txt");

    if(fin.is_open())
    {
        Pizza p;
        while(!fin.eof())
        {
            fin >> p;
            AllPizzas.push_back(p);
        }
        fin.close();
    }

    return AllPizzas;
}
/// Auka fall til að geyma pizzur.
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




