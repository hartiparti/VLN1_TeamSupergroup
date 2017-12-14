#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}
// Store all paid orders in, seperate file.
void OrderRepo::storePaidOrders(Order order)
{
    ofstream fout;
    fout.open("storePaidOrders.txt", ios::app);
    fout << order;
    fout.close();

}
// Store order with, ordered pizza.
void OrderRepo::storeNewOrderToFile(Order order)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt", ios::app);
    fout << order;
    fout.close();
}

// Return order with, ordered pizza.
vector <Order> OrderRepo::getlistOfNewOrders()
{
    vector <Order> NewOrders;
    ifstream fin;
    fin.open("PizzaForOrder.txt");

    if(fin.is_open())
    {
        Order o;
        while(!fin.eof())
        {
            fin >> o;
            NewOrders.push_back(o);
        }
        fin.close();
    }

    return NewOrders;
}


// Extra function for more functionality, to add to orders. *implemented for more than current functionality of program*
void OrderRepo::storeOrderToFile(Order order)
{
    ofstream fout;
    fout.open("orders.txt", ios::app);
    fout << order;
    fout.close();
}

//Store everything at the same time, *implemented for more than current functionality of program*
void OrderRepo::StoreAllOrdersToFile(vector<Order> &orders)
{
    ofstream fout;
    fout.open("orders.txt", ios::app);
    fout << orders.size();
    for(unsigned int i = 0; i < orders.size(); i++)
    {
        fout << orders[i];
    }
    fout.close();
}


