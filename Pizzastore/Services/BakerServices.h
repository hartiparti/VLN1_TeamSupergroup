#ifndef BAKERSERVICES_H
#define BAKERSERVICES_H


#include <vector>
#include "Toppingrepo.h"
#include "Pizzarepo.h"
#include "Topping.h"
#include "Pizza.h"
#include "Order.h"
using namespace std;

class BakerServices
{
    public:
        BakerServices();
        void readPizzas();



    private:
        Pizzarepo pizzarepo;
};

#endif // BAKERSERVICES_H
