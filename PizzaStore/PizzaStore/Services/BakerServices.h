#ifndef BAKERSERVICES_H
#define BAKERSERVICES_H

#include "PizzaRepo.h"
#include "Pizza.h"
#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

class BakerServices
{
    public:
        BakerServices();

        void showAllPizzas();

    private:
        PizzaRepo pizzarepo;
};

#endif // BAKERSERVICES_H
