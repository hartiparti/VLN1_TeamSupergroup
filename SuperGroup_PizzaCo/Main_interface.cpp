#include "Main_interface.h"
#include "Pizza_UI.h"
#include "AdminUI.h"
#include "AdminView.h"
#include <stdlib.h>


Main_interface::Main_interface(){


}


void Main_interface::Welcome(){

cout << "   _____                                                            __________  .__                       _____    " << endl;
cout << "  /  _  \\   __  _  __   ____     ______   ____     _____     ____   \\______   \\ |__| ________ ________   /  _  \\   " << endl;
cout << " /  /_\\  \\  \\ \\/ \\/ / _/ __ \\   /  ___/  /  _ \\   /     \\  _/ __ \\   |     ___/ |  | \\___   / \\___   /  /  /_\\  \\  " << endl;
cout << "/    |    \\  \\     /  \\  ___/   \\___ \\  (  <_> ) |  Y Y  \\ \\  ___/   |    |     |  |  /    /   /    /  /    |    \\ " << endl;
cout << "\\____|__  /   \\/\\_/    \\___  > /____  >  \\____/  |__|_|  /  \\___  >  |____|     |__| /_____ \\ /_____ \\ \\____|__  / " << endl;
cout << "        \\/                 \\/       \\/                 \\/       \\/                         \\/       \\/         \\/  " << endl;
cout << endl;


}



void Main_interface::Main_Version(){

cout << "      *******************************************************"<< endl;
cout << "      *                                                     *"<< endl;
cout << "      *        Welcome to |A w e s o m e P i z z A|         *"<< endl;
cout << "      *******************************************************"<< endl;
cout << "      *                                                     *"<< endl;
cout << "      *                                                     *"<< endl;
cout << "      *                Sales managementForce                *"<< endl;
cout << "      *                Version: 0.0.2                       *"<< endl;
cout << "      *                Date   : 29-11-2017                  *"<< endl;
cout << "      *                                                     *"<< endl;
cout << "      *******************************************************"<< endl;

}

void Main_interface::printSelection(){

cout << "      *                   a:  Admin                         *" << endl;
cout << "      *                   b:  Baker                         *" << endl;
cout << "      *                   r:  Staff at register             *" << endl;
cout << "      *                   o:  Order Screen                  *" << endl;
cout << "      *                   q:  Quit                          *" << endl;
cout << "      *                                                     *" << endl;
cout << "      *.....................................................*" << endl;



}


void Main_interface::print_Header(){

   cout <<   "      ********************************************************" << endl;
   cout <<   "      *                                                      *" << endl;
   cout <<   "      *            |A w e S o m e P i Z z A|                 *" << endl;
   cout <<   "      *          --------------------------                  *" << endl;
   cout <<   "      *             Sales managementForce                    *" << endl;
   cout <<   "      *          --------------------------                  *" << endl;
   cout <<   "      ********************************************************" << endl;




}



void Main_interface::read_OrderScreen(){
    system("CLS");
    cout << "this function does not work yet!" << endl;
    system("PAUSE");

}

void Main_interface::startUI(){


    char input = '\0';
    while(input != 'q'){
    cout << endl;
    system("PAUSE");
    system("CLS");
    Main_Version();
    printSelection();
    AdminUI admin;
    AdminView login;
    cout << endl;
    cin >> input;
    switch(input){
    case 'a':
        login.admin_ask_login();
        admin.passwordInput();;
        login.adminscreen();
        break;
    case 'b':
        cout << "Nothing yet";
        system("PAUSE");
        break;
    case 'o':
        read_OrderScreen();
        break;
        }

    }
}

