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



void Main_ui::printStart(){                         ///Færði header, selection og version í sér fall, þetta eru eiginlega bara cout skiðpanir.
    cout << endl << endl << endl;
    Main_ui mainmenu;
    mainmenu.printVersion();
    mainmenu.printHeader();
    mainmenu.printSelection();

}


void Main_ui::startUI(){
    AdminUI administrator;                  /// UI býr til administrator.
    AdminUI login;                        /// login screen fyrir AdminUI
    Baker_ui baker;                         /// UI býr til bakara
    OrderScr_ui make_order;
    RegisterUI  pickup_order;
                     /// UI býr til aðgang í OrderScrn
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
            pickup_order.Register_menu();                                /// "3" á að vera "Register/Kassi" eða þar sem þú getur afhent út pantanir, merkt þær sem greiddar/sóttar ofl.

    case '4':
            make_order.Store();                         /// "4" og farið er inn í order_menu til þess að panta, eða Búa til pöntun.
    case 'q':
        break;


    }

    }
}
