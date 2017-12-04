#include "Main_ui.h"
#include "Baker_ui.h"
#include "Main_view.h"
#include "AdminUI.h"
#include "AdminView.h"
#include "OrderScr_ui.h"
#include "Order_view.h"
#include <stdlib.h>

Main_ui::Main_ui()
{
    //ctor
}

Main_ui::~Main_ui()
{
    //dtor
}

void Main_ui::printStart(){                         ///Færði header, selection og version í sér fall, þetta eru eiginlega bara cout skiðpanir.
    cout << endl << endl << endl;
    Main_view mainmenu;
    mainmenu.printVersion();
    mainmenu.printHeader();
    mainmenu.printSelection();

}


void Main_ui::startUI(){
    AdminUI administrator;                  /// UI býr til administrator.
    AdminView login;                        /// login screen fyrir AdminUI
    Baker_ui baker;                         /// UI býr til bakara
    OrderScr_ui order;                      /// UI býr til aðgang í OrderScrn
    char input = '\0';
    while(input != 'q'){
    system("CLS");                          /// Hreinsa skjá.
    printStart();                           /// Kalla á "interface"
    cout << endl;
    cin >> input;
    switch(input){
    case '1':
            login.admin_ask_login();                    /// "1" valin í menu, fer inn í Admin.UI en spyr fyrst um login cred.
            administrator.passwordInput();              /// Promptar notanda um pw fyrir login.
            login.adminscreen();
            administrator.administrate();               /// Inn í administrator menu er svo hægt að stofna, breyta, bæta.
            break;

    case '2':
            baker.Baker_menu();                         /// "2" Inn í Baker á svo hægt að sjá pantanir á hverjum stað fyrir sig og merkja þær í vinnslu.

    case '3':
            cout << "Nothing yet";                      /// "3" á að vera "Register/Kassi" eða þar sem þú getur afhent út pantanir, merkt þær sem greiddar/sóttar ofl.
            return;
    case '4':
            order.order_menu();                         /// "4" og farið er inn í order_menu til þess að panta, eða Búa til pöntun.
    case 'q':
        break;


    }

    }
}
