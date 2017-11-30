#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
using namespace std;

class Topping
{
    public:
        Topping();
        Topping(char* name, double price);
        ~Topping();
        friend ostream& operator << (ostream& out, const Topping& topping);
        friend istream& operator >> (istream& in, Topping& topping);


    private:
        char name[60];      /// Segir til um hvad Toppings geta heitid.
        double price;       /// Segir til um verd a pizzunni.
};

#endif // TOPPING_H
