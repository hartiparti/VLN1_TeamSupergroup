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

    ifstream fin;
    fin.open("order.bin", ios::binary|ios::out);           /// Lesa í binary skrá,

    if(fin.is_open()){
        Order order;
            while(!fin.eof()){
                order.read_orders(fin);
                if (!fin.eof()){
                   orders.push_back(order);
                    }

            } fin.close();
        }
    else {
        cout << "Error";
    }

    return orders;                                        /// Út kemur vectorinn.

}
