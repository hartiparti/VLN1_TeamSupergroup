#include "BakerUI.h"

BakerUI::BakerUI()
{
    //ctor
}

void BakerUI::printScreenTop()
{
    cout << "      |  Order                                  | Status:  |" << endl;
    cout << "      |.........................................|..........|" << endl;

}

void BakerUI::printScreenBottom()
{
    cout << "      _____________________________________________________" << endl;
    cout << "              r: Mark ready   b:  back  q:  Quit          " << endl;

}

void BakerUI::printHeader()
{
    cout <<   "      *******************************************************" << endl;
    cout <<   "      *                                                     *" << endl;
    cout <<   "      *             |A w e S o m e P i Z z A|               *" << endl;
    cout <<   "      *           -----------------------------             *" << endl;
    cout <<   "      *                                                     *" << endl;
    cout <<   "      *                                                     *" << endl;
    cout <<   "      *******************************************************" << endl;
}


void BakerUI::BakerMenu()
{

    char selection;
    system("CLS");
    printHeader();
    printScreenTop();

    bakerservices.showNewOrderPizzas();

    printScreenBottom();

    cin >> selection;
    if(selection == 'r')
    {
        system("CLS");

        pizzaRepo.updateStatusOfNextPizza();

        printHeader();
        printScreenTop();
        bakerservices.showNewOrderPizzas();
        printScreenBottom();
        system("PAUSE");

    }
    if (selection == 'b')
    {
        MainUI goBack;
        goBack.startUI();


    }
    if (selection == 'q')
    {
        exit(0);
    }
    else
    {
        printHeader();
        printScreenTop();
        printScreenBottom();
    }
}
