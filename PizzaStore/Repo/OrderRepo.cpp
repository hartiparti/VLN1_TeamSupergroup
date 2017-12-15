#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}

void OrderRepo::storeNewOrderToFile(Order order)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt", ios::app);
    fout << order;
    fout.close();
}


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

    fin.close();
    return NewOrders;
}

void OrderRepo::storeOrderToFile(Order order)
{
    ofstream fout;
    fout.open("orders.txt", ios::app);
    fout << order;
    fout.close();
}

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


