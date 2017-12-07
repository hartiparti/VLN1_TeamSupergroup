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

void Main_ui::printStart(){                         ///F�r�i header, selection og version � s�r fall, �etta eru eiginlega bara cout ski�panir.
    cout << endl << endl << endl;
    Main_view mainmenu;
    mainmenu.printVersion();
    mainmenu.printHeader();
    mainmenu.printSelection();

}


void Main_ui::startUI(){
    AdminUI administrator;                  /// UI b�r til administrator.
    AdminView login;                        /// login screen fyrir AdminUI
    Baker_ui baker;                         /// UI b�r til bakara
    OrderScr_ui order;                      /// UI b�r til a�gang � OrderScrn
    char input = '\0';
    while(input != 'q'){
    system("CLS");                          /// Hreinsa skj�.
    printStart();                           /// Kalla � "interface"
    cout << endl;
    cin >> input;
    switch(input){
    case '1':
            login.admin_ask_login();                    /// "1" valin � menu, fer inn � Admin.UI en spyr fyrst um login cred.
            administrator.passwordInput();              /// Promptar notanda um pw fyrir login.
            login.adminscreen();
            administrator.administrate();               /// Inn � administrator menu er svo h�gt a� stofna, breyta, b�ta.
            break;

    case '2':
            baker.Baker_menu();                         /// "2" Inn � Baker � svo h�gt a� sj� pantanir � hverjum sta� fyrir sig og merkja ��r � vinnslu.

    case '3':
            cout << "Nothing yet";                      /// "3" � a� vera "Register/Kassi" e�a �ar sem �� getur afhent �t pantanir, merkt ��r sem greiddar/s�ttar ofl.
            return;
    case '4':
            order.order_menu();                         /// "4" og fari� er inn � order_menu til �ess a� panta, e�a B�a til p�ntun.
    case 'q':
        break;


    }

    }
}
