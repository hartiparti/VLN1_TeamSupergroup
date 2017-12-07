#ifndef PIZZAREPO_H
#define PIZZAREPO_H
#include "pizza.h"

class Pizzarepo
{
    public:
        Pizzarepo();
        virtual ~Pizzarepo();
        void storePizza(const Pizza& pizza);
        Pizza retrivePizza();


    private:
};

#endif // PIZZAREPO_H
