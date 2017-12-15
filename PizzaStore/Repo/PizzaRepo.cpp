#include "PizzaRepo.h"

PizzaRepo::PizzaRepo()
{

}

void PizzaRepo::addPizzasToNewOrder(Pizza pizza)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt", ios::app);

    fout << pizza;

    fout.close();
}

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

void PizzaRepo::updateStatusOfNextPizza()
{
    vector <Pizza> vector_of_pizzas;
    Pizza PizzaToUpdate;
    int indexOfPizzaInFile = 0;
    bool flag = true;

    ifstream fin;
    fin.open("pizzas.txt");

    if(fin.is_open())
    {
        Pizza p;
        while(fin >> p)
        {
            if(PizzaToUpdate.getStatus() == 0 && flag)
                flag = false;

            if(flag)
                indexOfPizzaInFile++;

            vector_of_pizzas.push_back(p);
        }
    }

    fin.close();

    PizzaToUpdate.setStatus(1);

    ofstream fout;
    fout.open("pizzas.txt");

    if(fout.is_open())
    {
        for(unsigned int i = 0; i < vector_of_pizzas.size(); i++){
            if(i == indexOfPizzaInFile)
                fout << PizzaToUpdate;
            else
                fout << vector_of_pizzas.at(i);
        }
    }

    fout.close();
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




