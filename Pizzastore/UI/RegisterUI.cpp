#include "RegisterUI.h"
#include "RegisterServices.h"
RegisterUI::RegisterUI()
{
    //ctor
}





void RegisterUI::get_all_orders(){           /// Virkar.

    vector <Order> all_orders = read_orders.readOrders();

        for(unsigned int i = 0; i < all_orders.size(); i++){
        cout << all_orders[i];
    }
}


void RegisterUI::Register_menu(){
    cout << "        Welcome to pick up          ";
    get_all_orders();

    int test2;
    cin >> test2



    ;

}



