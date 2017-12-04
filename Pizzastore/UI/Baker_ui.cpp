#include "Baker_ui.h"
#include "Order.h"
#include "Baker_view.h"
#include "Main_ui.h"
Baker_ui::Baker_ui()
{
    //ctor
}

Baker_ui::~Baker_ui()
{
    //dtor
}


string Baker_ui::get_mark_status(){

    return mark_status;
}

string Baker_ui::order_status(){
    char check;
    int number;
    cout << "Input order nr: ";
    cin >> number;
    cout << "Mark order ready y / n ?";
    cin >> check;
    if(check == 'n')
    {
        mark_status = "Waiting";
    }
    else if (check == 'y'){
        mark_status = "Ready";

    }

    return mark_status;
}

void Baker_ui::Baker_menu(){

    char selection;

    Baker_view menu;
    menu.Baker_header();
    menu.Baker_ScreenTop();
    Order order;
    order.return_order_number();
    menu.Baker_ScreenBottom();
    cin >> selection;
    if(selection == 'r')
    {
        Baker_ui mark_order;
        mark_order.order_status();
        Baker_ui go_back;
        go_back.Baker_menu();
        string status;
        Baker_ui check_status;
        status = check_status.order_status();
        menu.Baker_header();
        cout << check_status.order_status();
        menu.Baker_ScreenTop();
    }
    if (selection == 'b'){
        Main_ui back_to_main;
        back_to_main.startUI();

    }
    else {
        menu.Baker_header();
        menu.Baker_ScreenTop();
    }



}



