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
        Order(int orderNumber, string customerName, string customerPhoneNumber, int pizzaCount, double totalPrice, vector<Pizza> pizzas);

        int getOrderNumber();
        void setOrderNumber(int orderNumber);

        int getPizzaCount();
        void setPizzaCount(int numberOfPizzas);

        string getCustomerName();
        void setCustomerName(string name);

        string getCustomerPhoneNumber();
        void setCustomerPhoneNumber(string customerPhoneNumber);

        vector<Pizza> getPizzas();
        void setPizzas(vector<Pizza> pizzas);

        double getTotalPrice();
        void setTotalPrice(double price);

        friend ifstream& operator >> (ifstream& fin, Order& order);
        friend ofstream& operator << (ofstream& fout, const Order& order);

    private:
        int orderNumber;
        string customerName;
        string customerPhoneNumber;
        int pizzaCount;
        vector<Pizza> pizzas;
        double totalPrice;
};


#endif // ORDER_H
