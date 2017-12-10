#include "OrderScr_ui.h"

OrderScr_ui::OrderScr_ui()
{

}

/* Ef þetta á að keyra svona, þarf að taka tillit til þess í orders hlutanum, og keyra alltaf 2 binary/text files fyrir pantanir */


void OrderScr_ui::order_menu(){
    cout << "                                 Pizza Pizza!                                  " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             o: Make order                " << endl;
    cout << "                             m: Show menu    *NOT WORKING*                                  " << endl;
    cout << "                             s: Special Offers *NOT WORKING*                                 " << endl;
    cout << "                                                                               " << endl;
    cout << "                             b: logout to main                                 " << endl;
    cout << endl;
    cout << "                 ------------------------------------------------------------- " << endl;


}


void OrderScr_ui::order_pizza(){


    cout << "                           ***********************************                         " << endl;
    cout << "                                   List of toppings:                                   " << endl;
    cout <<  endl;



    cout << "Press 0 to quit";
}

void OrderScr_ui::Store(){                        /// Eins og er datt mér ekkert annað í hug en að setja upp 2 void föll fyrir hvaða bú við erum í, þetta er búð 2.
        system("CLS");
        OrderScr_ui Store;;
        cout << endl << endl;
        Store.order_menu();

        char selection;
        cin >> selection;
            if (selection == 'o')
            {

                cout << endl;
                Orderservice.make_order();
                Store.order_pizza();
            }
            else if (selection == 'm')
            {

            }
            else if (selection == 's'){
                //Special Offers
            }
            else if (selection == 'b'){
                return;
            }
            else{
                cout << "Wrong input";
            }
}





