#include "BakerServices.h"

BakerServices::BakerServices()
{
    //ctor
}

vector<Order> BakerServices::getlistOfNewOrders()
{
    OrderRepo orderRepo;
    return orderRepo.getlistOfNewOrders();
}

void BakerServices::showAllPizzas()
 {
    vector <Order> showOrders = getlistOfNewOrders();
    if (showOrders.size() == 0 )
    {
        cout << "no!";
    }
    for (unsigned int i = 0; i < showOrders.size(); i++)
    {
        Order order = showOrders.at(i);
        cout << "Pizza nr. " << i+1 << endl;
        cout << "Name: " << order.getCustomerName();
        system("PAUSE");
    }



 }


