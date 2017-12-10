#include "Orderrepo.h"

Orderrepo::Orderrepo()
{
    //ctor
}




void Orderrepo::storeOrders(const vector<Order> &orders){

    ofstream fout;                                          /// Opna binary skrá.
    fout.open("order.bin", ios::binary|ios::app);

    int counter = orders.size();                   /// Stærðin á vector.

    fout.write((char*)(&counter), sizeof(int));

    for(int i = 0; i < counter; i++){                 /// Skrifað í skrá
        orders[i].write_orders(fout);
    }
    fout.close();                                           /// Loka
}

vector<Order> Orderrepo::retriveOrders(){

    vector<Order> orders;                               /// Búa til vectorinn topping, og "temp" topping.
    Order order;
    ifstream fin;
    fin.open("order.bin", ios::binary|ios::out);           /// Lesa í binary skrá,

    if(fin.is_open()){

        int counter = orders.size();                /// Stærðin á vector.

        fin.read((char*)(&counter), sizeof(int));

        for(int i = 0; i < counter; i++){            ///  kallað á topping.read í hvert skipti, afrit af þeim topping klasa ofan í vectorinn.
            order.read_orders(fin);
            orders.push_back(order);                   /// Afritar gögnin í hvert skipti.
        }

        fin.close();

    }
    return orders;                                        /// Út kemur vectorinn.

}
