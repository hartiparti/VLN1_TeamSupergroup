#include "Order.h"
#include "fstream"

/* Gerir ekkert ennþá */
Order::Order(int order_number, string phone_number, string name, double price)
{

    this->order_number = order_number;

    this->phone_number = phone_number;

    this->name = name;

    this->price = price;

}

Order::Order()
{
    name = " ";
    phone_number = " ";
    order_number = 0;
    price = 0.0;

}


void Order::addPizza(Pizza pizza){

    pizzas.push_back(pizza);            /// Vectorinn tekur við toppings og bætir í.

}

string Order::get_phone_number(){

    return this->phone_number;
}

string Order::get_name(){

    return this->name;
}

int Order::get_order_number(){

    return this->order_number;
}

double Order::get_price(){

    return this->price;
}

void Order::write_orders(ofstream& fout) const{

    int string_length_name = name.length() + 1;
    fout.write((char*)(&string_length_name), sizeof(int));
    fout.write(name.c_str(), string_length_name);

    int string_length_phone_number = phone_number.length() + 1;
    fout.write((char*)(&string_length_phone_number), sizeof(int));
    fout.write(phone_number.c_str(), string_length_phone_number);

    fout.write((char*)(&price), sizeof(double));
    fout.write((char*)(&order_number), sizeof(int));


}

void Order::read_orders(ifstream& fin){

    int stringLength = name.length();
    fin.read((char*)(&stringLength), sizeof(int));
    char *str = new char[stringLength];       /// Kviklegt fylki af stærðinn stringLength
    fin.read(str, stringLength);
    name = str;

    int stringLength2 = phone_number.length();
    char *str2 = new char[stringLength2];
    fin.read(str2, stringLength2);
    phone_number = str2;

    fin.read((char*)(&price), sizeof(double));
    fin.read((char*)(&order_number), sizeof(int));

    delete[]str;
    delete[]str2;








}

ostream& operator << (ostream& out, const Order& order){
    cout << endl;
    cout << "Name: " << endl;
    out << order.name << endl;
    cout << "Phone number: ";
    out << order.phone_number;
    out << order.price;
    out << order.order_number;
    cout << endl;


    return out;

}

istream& operator >> (istream& in, Order& order){
    cout << "Name of customer: " << endl;
    in >> ws;
    getline(in, order.name);
    cout << "Phone number: ";
    cout << endl;
    getline(in, order.phone_number);


    return in;

 }





