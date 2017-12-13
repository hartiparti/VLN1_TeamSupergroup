#include "AdminUI.h"
#include "AdminServices.h"

AdminUI::AdminUI()
{

}

void AdminUI::printAdminScreen()
{
    system("CLS");
    cout << endl << endl << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
    cout << "                                   Administrator panel                         " << endl;
    cout << "                                                                               " << endl;
    cout << "                         Welcome, what would you like to do today?             " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             e: Access the toppings page                       " << endl;
    cout << "                             b:  go back                                       " << endl;
    cout << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
}

void AdminUI::printAccessToppings()
{
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


void AdminUI::Administrate()
{
    char input;
    cin >> input;
    if (input == 'e')
    {
        printAccessToppings();
        AdminServices adminServices;
        char input_2;
        cin >> input_2;
        while(true)
        {
            if (input_2 == 'r')
            {
                system("CLS");
                cout << "This is the current list of toppings: " << endl;
                cout << "---------------------------------------" << endl;
                adminServices.displayAllToppings();
                cout << endl;
                system("PAUSE");
                return;
            }
            else if (input_2 == 'a')
            {
                system("CLS");
                adminServices.addToToppings();
                cout << " Finished adding toppings " << endl;
                system("PAUSE");
                break;
            }
            else if (input_2 == 'b')
            {
                return;
            }

            else
            {
                cout << "Unknown input";
            }
        }
    }
    else if(input == 'b')
    {
        MainUI goBack;
        goBack.startUI();
    }
    else
    {
        cout << "invalid input";
    }
}
