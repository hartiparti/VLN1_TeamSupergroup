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


        double return_phonenr();                            /// S�man�mer:
        string return_customer_name();                     /// Nafn:
        int return_order_number();                        /// pt � n�meri
        double return_price();                            /// Ver�
        double return_discount();                        /// Afsl�ttur ef � vi�.

    private:

    double phone_number;
    string name;
    int order_number;
    double price;
    double discount;

};

#endif // ORDER_H


