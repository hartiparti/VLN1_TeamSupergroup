#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}
///Það sem við erum að nota.
void OrderRepo::storeNewOrderToFile(Order order)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt", ios::app);
    fout << order;
    fout.close();
}

/// Fall til að skila baka orders með vector.
vector <Order> OrderRepo::getlistOfNewOrders()
{
    vector <Order> NewOrders;
    ifstream fin;
    fin.open("PizzaForOrder.txt");
    if(fin.is_open())
    {
            while(!fin.eof())
            {
                Order order;
                fin >> order;
                NewOrders.push_back(order);
            }

    }
    else
    {

        cout << "error";
    }



    return NewOrders;
    fin.close();
}


/// Auka fall til að store-a orders.
void OrderRepo::storeOrderToFile(Order order)
{
    ofstream fout;
    fout.open("orders.txt", ios::app);
    fout << order;
    fout.close();
}

/// Auka fall til að store-a orders, allt í einu.
void OrderRepo::StoreAllOrdersToFile(vector<Order> &orders)
{
    ofstream fout;
    fout.open("NewOrders.txt", ios::app);
    fout << orders.size();
    for(unsigned int i = 0; i < orders.size(); i++)
    {
        fout << orders[i];
    }
    fout.close();
}


