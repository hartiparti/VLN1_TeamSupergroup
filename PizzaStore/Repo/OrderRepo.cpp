#include "OrderRepo.h"

OrderRepo::OrderRepo()
{

}
/// Should store all orders.
void OrderRepo::storeNewOrderToFile(Order order)
{
    ofstream fout;
    fout.open("PizzaForOrder.txt", ios::app);
    fout << order;
    fout.close();
}

/// Should get list of all orders.
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
        cout << "File could not open";
    }

    fin.close();
    return NewOrders;
}

/// Extra access, implemented for further functionality of the program.
void OrderRepo::storeOrderToFile(Order order)
{
    ofstream fout;
    fout.open("orders.txt", ios::app);
    fout << order;
    fout.close();
}

/// Extra access, implemented for further functionality of the program, store everything at the same time.

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


