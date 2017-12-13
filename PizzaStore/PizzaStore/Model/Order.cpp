#include "Order.h"

#include "Order.h"

Order::Order(){
    orderNumber = 0;
    customerName = "";
    customerPhoneNumber = "";
    pizzaCount = 0;
    totalPrice = 0;
}

int Order::getOrderNumber()
{
    return orderNumber;
}

void Order::setOrderNumber(int orderNumber)
{
    this->orderNumber = orderNumber;
}

string Order::getCustomerName()
{
    return customerName;
}

void Order::setCustomerName(string name)
{
    this->customerName = name;
}

string Order::getCustomerPhoneNumber()
{
    return customerPhoneNumber;
}

void Order::setCustomerPhoneNumber(string customerPhoneNumber)
{
    this->customerPhoneNumber = customerPhoneNumber;
}

vector<Pizza> Order::getPizzas()
{
    return pizzas;
}

void Order::setPizzaCount(int numberOfPizzas)
{
    this->pizzaCount = numberOfPizzas;
}

void Order::setPizzas(vector<Pizza> pizzas)
{
    this->pizzas = pizzas;
}

double Order::getTotalPrice()
{
    return totalPrice;
}

void Order::setTotalPrice(double price)
{
    this->totalPrice = price;
}

ifstream& operator >> (ifstream& fin, Order& order)
{
    fin >> order.orderNumber;
    fin >> order.customerName;
    fin >> order.customerPhoneNumber;
    fin >> order.pizzaCount;

    for(int i = 0; i < order.pizzaCount; i++)
    {
        Pizza p;
        fin >> p;
        order.pizzas.push_back(p);
    }

    fin >> order.totalPrice;
    return fin;
}

ofstream& operator << (ofstream& fout, const Order& order)
{
    fout << order.orderNumber;
    fout << order.customerName;
    fout << order.customerPhoneNumber;
    fout << order.pizzas.size();

    for(int i = 0; i < order.pizzas.size(); i++)
    {
        fout << order.pizzas[i];
    }

    fout << order.totalPrice;
    return fout;
}
