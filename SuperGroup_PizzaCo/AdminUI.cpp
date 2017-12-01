#include "AdminUI.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

AdminUI::AdminUI()
{
    //ctor
}

void AdminUI::passwordInput()
{
system("CLS");
    string password = "1234";           /// Breytt í string, þar sem int getur hreinlega overflowað.
    cout << endl << endl << endl;
    cout << "                        You must be an admin to access this page." << endl;
    cout << "                       -------------------------------------------" << endl;
    cout << "                               Type in password: ";
    string  input_password = " ";

    while(input_password != password)
    {

        cin >> input_password;
        if (input_password  !=password)
        {   cout << "                        Wrong password, try again: ";

        }
    }

}

void AdminUI::adminscreen()
{
    system("CLS");
    cout << "                      Welcome, what would you like to do today?" << endl;
    cout << "                           e: Edit prices of menu items" << endl;
    cout << "                           t: Access the toppings page" << endl;
    cout << "                           x: Create offer" << endl;
    cout << "                           a: Create new store" << endl;
    system("PAUSE");
}

AdminUI::~AdminUI()
{
    //dtor
}
