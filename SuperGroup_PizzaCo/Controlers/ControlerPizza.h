#ifndef CONTROLERPIZZA_H
#define CONTROLERPIZZA_H
#include "Pizza.h"

class ControlerPizza
{
    public:
        ControlerPizza();
        virtual ~ControlerPizza();

        void storePizza(const Pizza& pizza);
        Pizza retrivePizza();

    private:
};

#endif // CONTROLERPIZZA_H
