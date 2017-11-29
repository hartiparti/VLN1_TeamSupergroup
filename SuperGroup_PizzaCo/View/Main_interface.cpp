#include "Main_interface.h"
#include "Pizza_UI.h"
#include <stdlib.h>
Main_interface::Main_interface(){


}

void Main_interface::promptWelcome(){

cout <<      "              *******************************************************\n\r"
             "              *                                                     *\n\r"
             "              *        Welcome to |A w e S o m e P i Z z A|         *\n\r"
             "              *                                                     *\n\r"
             "              *******************************************************\n\r"
             "              *                                                     *\n\r"
             "              *                                                     *\n\r"
             "              *        Sales managementForce                        *\n\r"
             "              *        Version: 0.0.1                               *\n\r"
             "              *        Date   : 29-11-2017                          *\n\r"
             "              *                                                     *\n\r"
             "              ******************************************************" << endl;
}

void Main_interface::printScreen(){


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
    cin >> input;
    if (input == 'o'){
       Pizza_UI pizza_ui;
       pizza_ui.make_OrderScreen();
       pizza_ui.make_order();

    }
    else if(input == 'r'){
        read_OrderScreen();

    }
    else{
    system("CLS");

    }




}
}
