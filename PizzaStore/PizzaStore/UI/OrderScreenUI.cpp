#include "OrderScreenUI.h"

OrderScreenUI::OrderScreenUI()
{
    //ctor
}

void OrderScreenUI::printOrderMenu()
{
    system("CLS");
    cout << endl << endl << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
    cout << "                                   Make order panel                            " << endl;
    cout << "                                                                               " << endl;
    cout << "                         Welcome, what would you like to do today?             " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             o: make an new order                              " << endl;
    cout << "                             b: go back                                        " << endl;
    cout << endl;
    cout << "                 ------------------------------------------------------------- " << endl;

}


void OrderScreenUI::printOrderPizza()
{
    cout << "                           ***********************************                         " << endl;
    cout << "                                   List of all toppings                                " << endl;
    cout << endl;
    cout << "                                   Base price is 1000 Kr.                              " << endl;
    cout << endl;

    cout << endl;
}


void OrderScreenUI::OrderMenu()
{
        system("CLS");
        printOrderMenu();
        OrderServices orderService;
        cout << endl << endl;
        char selection;
        cin >> selection;
            if (selection == 'o')
            {   system("CLS");
                printOrderPizza();
                orderService.makeOrder();

            }
            else if (selection == 'b')
            {

                MainUI goBack;
                goBack.startUI();
            }
               else if (selection == 'q')
            {

                exit(0);
            }
            else
            {
                cout << "Woops! wrong input!";
                system("PAUSE");
            }
}

