#include "RegisterUI.h"

RegisterUI::RegisterUI()
{
    //ctor
}


void RegisterUI::printRegisterMenu()
{
    system("CLS");
    cout << endl << endl << endl;
    cout << "                 -------------------------------------------------------------     " << endl;
    cout << "                                   Register panel                                  " << endl;
    cout << "                                 *********************                             " << endl;
    cout << "                                  f: find and finish an order                      " << endl;
    cout << "                                  o: See list of ready orders                      " << endl;
    cout << "                                  b: go back                                       " << endl;
    cout <<"                                  *********************                             " << endl;
    cout << "                 -------------------------------------------------------------     " << endl;
}

void RegisterUI::RegisterMenu()
{

        system("CLS");
        printRegisterMenu();
        cout << endl << endl;
        char selection;
        cin >> selection;
            if (selection == 'f')
            {
                system("CLS");
                registerServices.getNewOrder();
            }
            else if (selection == 'o')
            {
                OrderServices orderServices;
                orderServices.ReadAllOrders();
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


