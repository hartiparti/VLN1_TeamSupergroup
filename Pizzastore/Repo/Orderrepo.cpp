#include "Orderrepo.h"

Orderrepo::Orderrepo()
{
    //ctor
}




void Orderrepo::storeOrders(const vector<Order> &orders){

    ofstream fout;                                          /// Opna binary skr�.
    fout.open("order.bin", ios::binary|ios::app);

    int counter = orders.size();                   /// St�r�in � vector.

    fout.write((char*)(&counter), sizeof(int));

    for(int i = 0; i < counter; i++){                 /// Skrifa� � skr�
        orders[i].write_orders(fout);
    }
    fout.close();                                           /// Loka
}

vector<Order> Orderrepo::retriveOrders(){

    vector<Order> orders;                               /// B�a til vectorinn topping, og "temp" topping.
    Order order;
    ifstream fin;
    fin.open("order.bin", ios::binary|ios::out);           /// Lesa � binary skr�,

    if(fin.is_open()){

        int counter = orders.size();                /// St�r�in � vector.

        fin.read((char*)(&counter), sizeof(int));

        for(int i = 0; i < counter; i++){            ///  kalla� � topping.read � hvert skipti, afrit af �eim topping klasa ofan � vectorinn.
            order.read_orders(fin);
            orders.push_back(order);                   /// Afritar g�gnin � hvert skipti.
        }

        fin.close();

    }
    return orders;                                        /// �t kemur vectorinn.

}
