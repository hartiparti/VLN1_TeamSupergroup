#include "MainUI.h"


MainUI::MainUI()
{
    //ctor
}

void MainUI::WelcomeScreen()
{
    cout << endl << endl << endl;
    cout << "   _____                                                            __________  .__                       _____    " << endl;
    cout << "  /  _  \\   __  _  __   ____     ______   ____     _____     ____   \\______   \\ |__| ________ ________   /  _  \\   " << endl;
    cout << " /  /_\\  \\  \\ \\/ \\/ / _/ __ \\   /  ___/  /  _ \\   /     \\  _/ __ \\   |     ___/ |  | \\___   / \\___   /  /  /_\\  \\  " << endl;
    cout << "/    |    \\  \\     /  \\  ___/   \\___ \\  (  <_> ) |  Y Y  \\ \\  ___/   |    |     |  |  /    /   /    /  /    |    \\ " << endl;
    cout << "\\____|__  /   \\/\\_/    \\___  > /____  >  \\____/  |__|_|  /  \\___  >  |____|     |__| /_____ \\ /_____ \\ \\____|__  / " << endl;
    cout << "        \\/                 \\/       \\/                 \\/       \\/                         \\/       \\/         \\/  " << endl;
    cout << endl;
}

void MainUI::printVersion()
{
    cout << "               *******************************************************" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *                Sales managementForce                *" << endl;
    cout << "               *                Version: 0.0.2                       *" << endl;
    cout << "               *                Date   : 29-11-2017                  *" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *******************************************************" << endl;
}

void MainUI::printHeader()
{

    cout << "               *******************************************************" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *             |A w e S o m e P i Z z A|               *" << endl;
    cout << "               *           -----------------------------             *" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *******************************************************" << endl;
}

void MainUI::printSelection(){

    cout << "               *                   1:  Admin login                   *" << endl;
    cout << "               *                   2:  Baker                         *" << endl;
    cout << "               *                   3:  Pickup & Register             *" << endl;
    cout << "               *                   4:  Order Screen                  *" << endl;
    cout << "               *                   q:  Quit                          *" << endl;
    cout << "               *                                                     *" << endl;
    cout << "               *******************************************************" << endl;

}

void MainUI::printStart()
{
    cout << endl << endl << endl;
    MainUI mainUI;
    mainUI.printVersion();
    mainUI.printHeader();
    mainUI.printSelection();

}

void MainUI::startUI()
{
    AdminUI adminUI;
    BakerUI bakerUI;
    OrderScreenUI orderScreenUI;
    RegisterUI registerUI;
   //egisterUI registerUI;

    char input = '\0';
    while(input != 'q')
    {
        system("CLS");
        printStart();
        cout << endl;
        cin >> input;
        switch(input)
        {
            case '1':
                    adminUI.printAdminScreen();
                    adminUI.Administrate();
                    break;

            case '2':
                    bakerUI.BakerMenu();
                    break;
            case '3':
                     registerUI.RegisterMenu();
                     break;
            case '4':
                    orderScreenUI.OrderMenu();
                    break;

                break;
        }
    }
}
