#include "RegisterUI.h"
#include "RegisterServices.h"
RegisterUI::RegisterUI()
{
    //ctor
}




void RegisterUI::Register_menu(){
    cout << "        Welcome to pick up          ";

    vector <Order> all_orders = read_orders.readOrders();
        for(unsigned int i = 0; i < all_orders .size(); i++){
        cout << all_orders [i];
    }
}



