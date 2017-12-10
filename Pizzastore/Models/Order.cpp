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

    int string_length_name = name.length();
    fin.read((char*)(&string_length_name), sizeof(int));
    char *str_temp1 = new char[string_length_name];       /// Kviklegt fylki af stærðinn stringLength
    fin.read(str_temp1, string_length_name);
    name = str_temp1;

    int string_length_phone = phone_number.length();
    fin.read((char*)(&string_length_phone), sizeof(int));
    char *str_temp2 = new char[string_length_phone];
    fin.read(str_temp2, string_length_phone);
    phone_number = str_temp2;

    fin.read((char*)(&price), sizeof(double));
    fin.read((char*)(&order_number), sizeof(int));


    delete[] str_temp1;          /// Ekki gleyma ad eyda.
    delete[] str_temp2;

}

ostream& operator << (ostream& out, const Order& order){

    cout << "Name: " << out << order.name << endl;
    cout << "Phone number: "<<  out << order.phone_number << endl;
    cout << endl;

    return out;

}

istream& operator >> (istream& in, Order& order){
    cout << "Name of customer: ";
    in >> ws;
    getline(in, order.name);     // Getline til að fá nafnið með whitespace
    cout << "Phone number: ";
    in >> order.phone_number;

    return in;

 }





