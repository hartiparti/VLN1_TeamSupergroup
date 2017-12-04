#ifndef TOPPINGREPO_H
#define TOPPINGREPO_H
#include <vector>
#include "Topping.h"
using namespace std;


class Toppingrepo
{
    public:
        Toppingrepo();
        virtual ~Toppingrepo();
        void storeToppings(const vector<Topping> &toppings);
        vector<Topping> retriveToppings();

    protected:

    private:
};

#endif // TOPPINGREPO_H
