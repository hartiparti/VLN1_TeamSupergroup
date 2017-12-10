#include "AdminUI.h"
#include "AdminServices.h"
#include <stdlib.h>

/**   AdminUI s�r um allt �a� sem Administrator � a� geta gert � kerfinu.  Kalla � view f�llin og service layer, notum l�ka stdlib.h til �ess a� geta Pause-a�  */

AdminUI::AdminUI(){


}

void AdminUI::adminscreen()
{
    system("CLS");
    cout << endl << endl << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
    cout << "                                   Administrator panel                         " << endl;
    cout << "                                                                               " << endl;
    cout << "                         Welcome, what would you like to do today?             " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             e: Edit menu items*NOT WORKING*                   " << endl;
    cout << "                             t: Access the toppings page                       " << endl;
    cout << "                             c: Create offer *NOT WORKING*                     " << endl;
    cout << "                             a: Create offer *NOT WORKING*                     " << endl;
    cout << "                             o: Access orders *NOT WORKING*                    " << endl;
    cout << "                             b: logout                                         " << endl;
    cout << endl;
    cout << "                 ------------------------------------------------------------- " << endl;

}

void AdminUI::admin_ask_login(){
    system("CLS");
    cout << endl << endl << endl;
    cout << "                       **************************************************" << endl;
    cout << "                       *                   WARNING!                     *" << endl;
    cout << "                       *    You must be an admin to access this page    *" << endl;
    cout << "                       **************************************************" << endl;
    cout << "                                   Type in password: ";

}

void AdminUI::edit_screen(){
    system("CLS");
    cout << endl << endl << endl;
    cout << "                                   Access toppings                             " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             r: read current list of toppings                  " << endl;
    cout << "                             a: add toppings to system                         " << endl;
    cout << "                             b: go back                                        " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << endl;

}


void AdminUI::passwordInput(){
    string password = "1234";                                      /// Breytt � string, �ar sem int getur hreinlega overflowa�.  Validate-ar password fyrir Admin access.
    string input_password = " ";                                   /// Loopar � bei�ni um password �anga� til slegi� er strengurinn 1234
    while(input_password != password)
    {
        cin >> input_password;
        if (input_password  !=password)
        {
            cout << "                        Wrong password, try again: ";

        }
    }

}

void AdminUI::administrate(){                                       /// �arf a� sko�a � gegnum if state-ments svo �a� runni meira smoothly.

    char input;
    cin >> input;
    if (input == 't'){
        AdminUI printedit;                                       /// Kalla � view f�llinn, sem eru eiginlega bara "cout" �tlits setningar.
        printedit.edit_screen();
         char input_2;
         cin >> input_2;
         while(true){
         if (input_2 == 'r'){
            system("CLS");
            cout << "This is the current list of toppings: " << endl;
            cout << "---------------------------------------" << endl;
            AdminServices read_list;
            read_list.readToppings();                               /// Listar �au toppings sem eru til � toppings.bin, notar AdminService
            cout << endl;
            system("PAUSE");
            return;
            }
            else if (input_2 == 'a'){
            system("CLS");
            cout << "Add how many toppings";
            AdminServices add_to_list;
            add_to_list.addToppings();
            cout << "Finished adding toppings";                     /// B�tir vi� �au toppings sem eru til � toppings.bin
            system("PAUSE");
            break;
            }
            else if (input_2 == 'e'){                               /// Breyta ver�i � toppings.
            cout << "Edit topping price";
            }
            else if (input_2 == 'b'){
            return;
            }
            else if (input_2 == 'q') {
                break;
            }
            else {
            cout << "Unknown input";
            }
        }
    }
}
