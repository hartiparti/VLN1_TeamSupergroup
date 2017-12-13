#include "PizzaRepo.h"

PizzaRepo::PizzaRepo()
{

}
///�a� sem vi� erum a� nota.
void PizzaRepo::addPizzasToNewOrder(Pizza pizza)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt");

    fout << pizza;

    fout.close();
}
///Erum a� nota til a� s�kja pizza fyrir order.
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

/// Auka f�ll, til a� adda t.d pizzu.

void PizzaRepo::addPizzasTofile(Pizza pizza)
{
    ofstream fout;
    fout.open("pizzas.txt", ios::app);

    fout << pizza;

    fout.close();
}
/// Auka fall til a� s�kja allar pizzur.
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
        cout << "Error";
    }

    fin.close();
    return vector_of_pizzas;
}
/// Auka fall til a� geyma pizzur.
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



