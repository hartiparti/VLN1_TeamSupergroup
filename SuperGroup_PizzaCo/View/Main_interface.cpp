#include "Main_interface.h"
#include "Pizza_UI.h"
#include "AdminUI.h"
#include <stdlib.h>
Main_interface::Main_interface(){


}

void Main_interface::promptWelcome(){

cout <<      "              *******************************************************\n\r"
             "              *                                                     *\n\r"
             "              *        Welcome to |A w e s o m e P i z z A|         *\n\r"
             "              *                                                     *\n\r"
             "              *******************************************************\n\r"
             "              *                                                     *\n\r"
             "              *                                                     *\n\r"
             "              *        Sales managementForce                        *\n\r"
             "              *        Version: 0.0.2                               *\n\r"
             "              *        Date   : 29-11-2017                          *\n\r"
             "              *                                                     *\n\r"
             "              ******************************************************" << endl;
}

void Main_interface::printScreen(){

    cout << "                  *            a:  Admin                * " << endl << endl;
    cout << "                  *            b:  Baker                * " << endl << endl;
    cout << "                  *            r:  Staff at register    * " << endl << endl;
    cout << "                  *            o:  Order Screen         * " << endl << endl;
    cout << "                  *            r:  Read Order           * " << endl << endl;
    cout << "                  *            q:  Quit                 * " << endl;
    cout << "                  ...................................... " << endl << endl;


}


void Main_interface::print_Header(){

   cout <<   "              ********************************************************\n\r"
             "              *                                                      *\n\r"
             "              *            |A w e S o m e P i Z z A|                 *\n\r"
             "              *          --------------------------                  *\n\r"
             "              *             Sales managementForce                    *\n\r"
             "              *          --------------------------                  *\n\r"
             "              ********************************************************\n\r" << endl;




}
/*
void Main_interface::print_Bottom(){
cout << "   ...........................   " << endl;
cout << "                   Version 1.0   " << endl;


}
*/

void Main_interface::read_OrderScreen(){
    system("CLS");
    cout << "this function does not work yet!" << endl;
    system("PAUSE");

}

void Main_interface::startUI(){


    cout << endl;
    char input = '\0';
    while(input != 'q'){
    system("CLS");
    promptWelcome();
    printScreen();
    cout << "What interface background do you want to access? ";
    cin >> input;
    if(input == 'a'){
        AdminUI admin;
        admin.passwordInput();
        admin.adminscreen();

                        //hafa password 123
    }
    else if (input == 'o'){
       Pizza_UI pizza_ui;
       pizza_ui.make_OrderScreen();
       pizza_ui.make_order();

    }
    else if(input == 'r'){
        read_OrderScreen();

    }


/*
    else if(input == 'b'){


    }
    else if(input == 'r'){


    }
*/
    else{
    system("CLS");

    }




}
}
