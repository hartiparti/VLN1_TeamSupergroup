#ifndef BAKERUI_H
#define BAKERUI_H

#include "MainUI.h"
#include "Order.h"
#include "BakerServices.h"

#include <stdlib.h>

class BakerUI
{
    public:
        BakerUI();

        void printScreenTop();
        void printScreenBottom();
        void printHeader();

        void BakerMenu();

    private:
        BakerServices bakerservices;
        PizzaRepo pizzaRepo;
};

#endif // BAKERUI_H
