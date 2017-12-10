#include "Baker_ui.h"
#include "Order.h"
#include "Main_ui.h"
#include "BakerServices.h"
#include <stdlib.h>
Baker_ui::Baker_ui()
{
    //ctor
}

Baker_ui::~Baker_ui()
{
    //dtor
}






void Baker_ui::Baker_ScreenTop(){


cout << "      |  Order                                  | Status:  |" << endl;
cout << "      |.........................................|..........|" << endl;

}


void Baker_ui::Baker_ScreenBottom(){


cout << "      _____________________________________________________" << endl;
cout << "              r: Mark ready   b:  back  q:  Quit          " << endl;

}


void Baker_ui::Baker_header(){
cout <<   "      *******************************************************" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *             |A w e S o m e P i Z z A|               *" << endl;
cout <<   "      *           -----------------------------             *" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *******************************************************" << endl;

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
    system("CLS");
    Baker_ui menu;
    menu.Baker_header();
    menu.Baker_ScreenTop();

    BakerServices show;
    show.readPizzas();

    menu.Baker_ScreenBottom();


    cin >> selection;
    if(selection == 'r')
    {


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


