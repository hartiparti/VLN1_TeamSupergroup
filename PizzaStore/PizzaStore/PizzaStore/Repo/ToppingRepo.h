#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H


#include "Topping.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class ToppingRepo
{
    public:
        ToppingRepo();

        ///Auka fall
        ///void addToToppings(Topping &topping);

        void storeAllToppings(vector<Topping> &toppings);
        vector<Topping> retriveAllToppings();


    private:
         int toppingCount;
};

#endif // TOPPINGREPO_H
