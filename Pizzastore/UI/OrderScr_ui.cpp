#include "OrderScr_ui.h"

OrderScr_ui::OrderScr_ui()
{

}

/* Ef �etta � a� keyra svona, �arf a� taka tillit til �ess � orders hlutanum, og keyra alltaf 2 binary/text files fyrir pantanir */


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

void OrderScr_ui::Store(){                        /// Eins og er datt m�r ekkert anna� � hug en a� setja upp 2 void f�ll fyrir hva�a b� vi� erum �, �etta er b�� 2.
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





