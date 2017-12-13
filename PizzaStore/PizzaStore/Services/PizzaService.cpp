#include "PizzaService.h"

PizzaService::PizzaService()
{
    //ctor
}

PizzaService::~PizzaService()
{
    //dtor
}


void PizzaService::addPizzaToMenu(Pizza pizza)
{
    PizzaRepo pizzaRepo;

    if( isValid(pizza)){
        pizzaRepo.storePizzaToMenu(pizza);
    }
}

vector<Pizza> PizzaService::getPizzasFromMenu(){
    PizzaRepo pizzaRepo;
    return pizzaRepo.retivePizzaFromMenu();
}


// TODO
bool PizzaService::isValid(Pizza pizza){
    return true;
}
