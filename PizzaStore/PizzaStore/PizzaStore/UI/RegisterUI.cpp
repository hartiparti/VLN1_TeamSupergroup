#include "RegisterUI.h"

RegisterUI::RegisterUI()
{
    //ctor
}



void RegisterUI::printRegisterMenu()
{
    system("CLS");
    cout << endl << endl << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
    cout << "                                   Register panel                              " << endl;
    cout << "                                                                               " << endl;
    cout << "                         Welcome, what would you like to do today?             " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             r: Register an order                              " << endl;
    cout << "                             o: See list of ready orders                       " << endl;
    cout << "                             b: logout                                         " << endl;
    cout << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
}


void RegisterUI::RegisterMenu()
{

        system("CLS");
        printRegisterMenu();
        cout << endl << endl;
        char selection;
        cin >> selection;
            if (selection == 'r')
            {   system("CLS");
                // Kalla i pay/order

            }
            else if (selection == 'o')
            {

            }
            else if (selection == 'b')
            {

                MainUI goBack;
                goBack.startUI();
            }

            else
            {
                cout << "Woops! wrong input!";
                return;
            }
}


