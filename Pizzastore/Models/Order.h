#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <string>
#include <iostream>
#include <string.h>
#include "Pizza.h"
using namespace std;


class Order
{
    public:
        Order();
        Order(int order_number, string phone_number, string name, double price);

        int get_order_number();
        string get_phone_number();
        string get_name();
        double get_price();

        void read_orders(ifstream& fin);
        void write_orders(ofstream& fout) const;

        void addPizza(Pizza pizza);

        friend ostream& operator << (ostream& out, const Order& order);
        friend istream& operator >> (istream& in, Order& order);



    private:

    string phone_number;
    string name;
    int order_number;
    double price;
    vector<Pizza> pizzas;

};

#endif // ORDER_H


