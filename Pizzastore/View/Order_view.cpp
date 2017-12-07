#include "Order_view.h"

/* Útlit fyrir Order menu */
Order_view::Order_view()
{
    //ctor
}

void Order_view::select_store(){
    system("CLS");
    cout << endl << endl << endl;
    cout << "                -------------------------------------------------------------- "  << endl;
    cout << "                                    Select store:                              " << endl;
    cout << "                                                                               " << endl;
    cout << "                                    [1]  Store A                               " << endl;
    cout << "                                                                               " << endl;
    cout << "                                    [2]  Store B                               " << endl;
    cout << "                                                                               " << endl;
    cout << "                                     b: Go back                                " << endl;
    cout << "                 ------------------------------------------------------------- " << endl;



}

void Order_view::PrintStoreTitle(){
    system("CLS");
    cout << endl << endl << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
    cout << "                                   Order panel: ";
}
void Order_view::order_menu(){

    cout << "                           ***********************************                 " << endl;
    cout << "                             o: Make Pizza / *make order lika?*                " << endl;
    cout << "                             m: Show menu                                      " << endl;
    cout << "                             s: Special Offers                                 " << endl;
    cout << "                                                                               " << endl;
    cout << "                             b: logout to main                                 " << endl;
    cout << endl;
    cout << "                 ------------------------------------------------------------- " << endl;


}
