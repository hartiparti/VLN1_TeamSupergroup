#include "Pizza.h"
#include "Main_interface.h"
#include "Pizza_UI.h"
#include "Topping.h"

Pizza::Pizza()
{
    count_of_toppings = 0;
    toppings = 0;
    current_nr_of_toppings = 0;
}

Pizza::Pizza(int nr_of_toppings){

    initialize(nr_of_toppings);

}

Pizza::~Pizza()
{
    clean_memory();

}

void Pizza::clean_memory(){

    if(toppings != 0){
    delete[] toppings;
    count_of_toppings = 0;
    toppings = 0;
    current_nr_of_toppings = 0;
    }
}

void Pizza::initialize(int nr_of_toppings){
    clean_memory();
    count_of_toppings = nr_of_toppings;
    toppings = new Topping[count_of_toppings];
    current_nr_of_toppings = 0;

}


void Pizza::add_topping_to_pizza(Topping topping) {
    if(current_nr_of_toppings < count_of_toppings){
        toppings[current_nr_of_toppings] = topping;
        current_nr_of_toppings++;
        }
}

istream& operator >> (istream& in, Pizza& pizza){
    int toppingCount;
    in >> toppingCount;
    pizza.initialize(toppingCount);

    Topping topping;

    for(int i = 0; i < pizza.count_of_toppings; i++){
        in >> topping;
        pizza.add_topping_to_pizza(topping);

    }

    return in;
}



ostream& operator << (ostream& out, const Pizza& pizza){
    // out << "Pizza with toppings: " << endl;    <--- Sleppt því við ætlum að skrifa út í skjal.
    out << pizza.count_of_toppings << " ";

    for(int i = 0; i < pizza.count_of_toppings; i++){
        out << pizza.toppings[i] << endl;

    }

    return out;
}



