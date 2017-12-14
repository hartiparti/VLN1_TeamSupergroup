#include "OrderScreenUI.h"

OrderScreenUI::OrderScreenUI()
{
    //ctor
}

void OrderScreenUI::printOrderMenu()
{
    system("CLS");
    cout << endl << endl << endl;
    cout << "                 -------------------------------------------------------------         " << endl;
    cout << "                                   Make order panel                                    " << endl;
    cout << "                                 *********************                                 " << endl;
    cout << "                                  o: make an new order                                 " << endl;
    cout << endl;
    cout << "                                  b: go back                                           " << endl;
    cout << endl;
    cout << "                                 *********************                                 " << endl;
    cout << "                 -------------------------------------------------------------         " << endl;


}


void OrderScreenUI::printOrderPizza()
{
    cout << endl << endl << endl;
    cout << "                                  Make a new order                                     " << endl;
    cout << "                                 *********************                                 " << endl;
    cout << "                             Base price for a pizza is 1000 Kr.                        " << endl;
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
            {
                system("CLS");
                printOrderPizza();
                orderService.MakeOrder();
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

