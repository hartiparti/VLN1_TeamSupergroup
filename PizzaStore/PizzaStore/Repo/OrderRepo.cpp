#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}



void OrderRepo::storeOrderToFile(Order order)
{
    ofstream fout;
    fout.open("orders.txt", ios::app);
    fout << order;
    fout.close();
}


vector<Order> listOfNewOrders()
{
    vector<Order> NewOrders;
    ifstream fin;
    fin.open("NewOrders.txt");

    if(fin.is_open())
    {
        Order o;
        while(fin >> o){
            NewOrders.push_back(o);
        }
        fin.close();
    }

    return NewOrders;


}



vector <Order> OrderRepo::retriveAllOrders()
{
    vector<Order> orders;
    ifstream fin;
    fin.open("orders.txt");

    if(fin.is_open())
    {
        int counter = 0; //ERROR CHEACK
        Order t;
        while(fin >> t)
        {
            orders.push_back(t);
            counter++;
        }
    }
    else
    {
        cout << "Error";
    }
    fin.close();

    return orders;
}
