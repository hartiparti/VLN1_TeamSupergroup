#ifndef ORDER_H
#define ORDER_H
#include "string.h"
#include <iostream>
using namespace std;


class Order
{
    public:
        Order();
        Order(int order_number, double phone_number, string name, double price);
        virtual ~Order();


        double return_phonenr();                            /// Símanúmer:
        string return_customer_name();                     /// Nafn:
        int return_order_number();                        /// pt á númeri
        double return_price();                            /// Verð
        double return_discount();                        /// Afsláttur ef á við.

    private:

    double phone_number;
    string name;
    int order_number;
    double price;
    double discount;

};

#endif // ORDER_H


