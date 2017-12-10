#include "AdminUI.h"
#include "AdminServices.h"
#include <stdlib.h>

/**   AdminUI sér um allt það sem Administrator á að geta gert í kerfinu.  Kalla í view föllin og service layer, notum líka stdlib.h til þess að geta Pause-að  */

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
    string password = "1234";                                      /// Breytt í string, þar sem int getur hreinlega overflowað.  Validate-ar password fyrir Admin access.
    string input_password = " ";                                   /// Loopar á beiðni um password þangað til slegið er strengurinn 1234
    while(input_password != password)
    {
        cin >> input_password;
        if (input_password  !=password)
        {
            cout << "                        Wrong password, try again: ";

        }
    }

}

void AdminUI::administrate(){                                       /// Þarf að skoða í gegnum if state-ments svo það runni meira smoothly.

    char input;
    cin >> input;
    if (input == 't'){
        AdminUI printedit;                                       /// Kalla í view föllinn, sem eru eiginlega bara "cout" útlits setningar.
        printedit.edit_screen();
         char input_2;
         cin >> input_2;
         while(true){
         if (input_2 == 'r'){
            system("CLS");
            cout << "This is the current list of toppings: " << endl;
            cout << "---------------------------------------" << endl;
            AdminServices read_list;
            read_list.readToppings();                               /// Listar þau toppings sem eru til í toppings.bin, notar AdminService
            cout << endl;
            system("PAUSE");
            return;
            }
            else if (input_2 == 'a'){
            system("CLS");
            cout << "Add how many toppings";
            AdminServices add_to_list;
            add_to_list.addToppings();
            cout << "Finished adding toppings";                     /// Bætir við þau toppings sem eru til í toppings.bin
            system("PAUSE");
            break;
            }
            else if (input_2 == 'e'){                               /// Breyta verði á toppings.
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
