#include "Main_ui.h"
#include "Baker_ui.h"
#include "AdminUI.h"
#include "OrderScr_ui.h"
#include "RegisterUI.h"
#include <stdlib.h>



Main_ui::Main_ui()
{
    //ctor
}

Main_ui::~Main_ui()
{
    //dtor
}

void Main_ui::WelcomeScreen(){
cout << endl << endl << endl;
cout << "   _____                                                            __________  .__                       _____    " << endl;
cout << "  /  _  \\   __  _  __   ____     ______   ____     _____     ____   \\______   \\ |__| ________ ________   /  _  \\   " << endl;
cout << " /  /_\\  \\  \\ \\/ \\/ / _/ __ \\   /  ___/  /  _ \\   /     \\  _/ __ \\   |     ___/ |  | \\___   / \\___   /  /  /_\\  \\  " << endl;
cout << "/    |    \\  \\     /  \\  ___/   \\___ \\  (  <_> ) |  Y Y  \\ \\  ___/   |    |     |  |  /    /   /    /  /    |    \\ " << endl;
cout << "\\____|__  /   \\/\\_/    \\___  > /____  >  \\____/  |__|_|  /  \\___  >  |____|     |__| /_____ \\ /_____ \\ \\____|__  / " << endl;
cout << "        \\/                 \\/       \\/                 \\/       \\/                         \\/       \\/         \\/  " << endl;
cout << endl;
}


void Main_ui::printVersion(){

    cout << "               *******************************************************" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *                Sales managementForce                *" << endl;
    cout << "               *                Version: 0.0.2                       *" << endl;
    cout << "               *                Date   : 29-11-2017                  *" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *******************************************************" << endl;
}

void Main_ui::printHeader(){

    cout << "               *******************************************************" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *             |A w e S o m e P i Z z A|               *" << endl;
    cout << "               *           -----------------------------             *" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *******************************************************" << endl;
}

void Main_ui::printSelection(){

    cout << "               *                   1:  Admin login                   *" << endl;
    cout << "               *                   2:  Baker                         *" << endl;
    cout << "               *                   3:  Pickup & Register             *" << endl;
    cout << "               *                   4:  Order Screen                  *" << endl;
    cout << "               *                   q:  Quit                          *" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *******************************************************" << endl;

}



void Main_ui::printStart(){                         ///F�r�i header, selection og version � s�r fall, �etta eru eiginlega bara cout ski�panir.
    cout << endl << endl << endl;
    Main_ui mainmenu;
    mainmenu.printVersion();
    mainmenu.printHeader();
    mainmenu.printSelection();

}


void Main_ui::startUI(){
    AdminUI administrator;                  /// UI b�r til administrator.
    AdminUI login;                        /// login screen fyrir AdminUI
    Baker_ui baker;                         /// UI b�r til bakara
    OrderScr_ui make_order;
    RegisterUI  pickup_order;
                     /// UI b�r til a�gang � OrderScrn
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
            pickup_order.Register_menu();                                /// "3" � a� vera "Register/Kassi" e�a �ar sem �� getur afhent �t pantanir, merkt ��r sem greiddar/s�ttar ofl.

    case '4':
            make_order.Store();                         /// "4" og fari� er inn � order_menu til �ess a� panta, e�a B�a til p�ntun.
    case 'q':
        break;


    }

    }
}
