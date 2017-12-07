#include "Order.h"
#include "string.h"

/* Gerir ekkert ennþá */
Order::Order(int order_number, double phone_number, string name, double price)
{

    this->order_number = order_number;

    this->phone_number = phone_number;

    this->name = name;

    this->price = price;

}

Order::Order()
{
    name = "";
    phone_number = 0.0;
    order_number = 0;
    price = 0.0;

}

Order::~Order()
{
    //dtor
}

double Order::return_phonenr(){

    return this->phone_number;
}

string Order::return_customer_name(){

    return this->name;
}

int Order::return_order_number(){

    return this->order_number;
}

double Order::return_price(){

    return this->price;
}

double Order::return_discount(){

    return this->discount;
}


