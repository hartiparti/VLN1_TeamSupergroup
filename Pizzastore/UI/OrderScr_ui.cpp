#include "OrderScr_ui.h"

OrderScr_ui::OrderScr_ui()
{

}

/* Ef �etta � a� keyra svona, �arf a� taka tillit til �ess � orders hlutanum, og keyra alltaf 2 binary/text files fyrir pantanir */

void OrderScr_ui::Store_1(){            /// Eins og er datt m�r ekkert anna� � hug en a� setja upp 2 void f�ll fyrir hva�a b� vi� erum �, �etta er b�� 1.

        Order_view Store1;

        Store1.PrintStoreTitle();

        cout << "Store_1";
        cout << endl << endl;

        Store1.order_menu();

        char selection;
        cin >> selection;
            if (selection == 'o')
            {
                //make order
            }
            else if (selection == 'm')
            {
                //Show menu
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


void OrderScr_ui::Store_2(){                        /// Eins og er datt m�r ekkert anna� � hug en a� setja upp 2 void f�ll fyrir hva�a b� vi� erum �, �etta er b�� 2.

        Order_view Store2;
        Store2.PrintStoreTitle();
        cout << "Store_2";
        cout << endl << endl;
        Store2.order_menu();

        char selection;
        cin >> selection;
            if (selection == 'o')
            {
                //make order
            }
            else if (selection == 'm')
            {
                //Show menu
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



void OrderScr_ui::order_menu(){                         /// Fyrsti valm�guleiki, hva�a b�� viltu fara �.

    Order_view store;
    store.select_store();

    char selection;
    cin >> selection;
    if (selection == '1'){
        OrderScr_ui store1;
        store1.Store_1();
    }
    else if(selection == '2'){
        OrderScr_ui store2;
        store2.Store_2();
    }
    else if (selection == 'b'){
        return;
    }
    else {
        cout << "Wrong input";
        system("PAUSE");
    }



}

