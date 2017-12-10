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

    ifstream fin;
    fin.open("order.bin", ios::binary|ios::out);           /// Lesa � binary skr�,

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

    return orders;                                        /// �t kemur vectorinn.

}
