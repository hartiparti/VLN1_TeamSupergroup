#include "RegisterServices.h"

RegisterServices::RegisterServices()
{
    //ctor
}

/// Primarily to look for a certain order via phone numbers,
vector <Order> RegisterServices::findNewOrder(string input)
{
    vector <Order> ListofNewOrders = orderRepo.getlistOfNewOrders();
    vector <Order> FindCustomersOrder;

    for(unsigned int i = 0; i < ListofNewOrders.size(); i++)
    {
            if(ListofNewOrders[i].getCustomerPhoneNumber() == input)
            {
                FindCustomersOrder.push_back(ListofNewOrders[i]);
            }

    }
        return FindCustomersOrder;
}
/// Call up orders from the Data layer.
void RegisterServices::getNewOrder()
{
    string input = " ";
    cout << "Insert a phone number for pickup: ";
    cin >> input;
    vector <Order> CustomersOrder = findNewOrder(input);
    for (unsigned int i = 0; i < CustomersOrder.size(); i++)
    {
        cout << endl;
        Order order = CustomersOrder.at(i);
        cout << "Item number [" << i+1 << "] -- " <<  endl;
        cout << "Name: " << order.getCustomerName() << endl;
        cout << "Number: " << order.getCustomerPhoneNumber() << endl;
        cout << "Price: " << order.getTotalPrice() << endl;

        cout << endl;
    }
}
