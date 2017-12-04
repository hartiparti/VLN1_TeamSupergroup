#include "Main_ui.h"
#include "Baker_ui.h"
#include "Main_view.h"
#include "Admin_ui.h"
#include "AdminView.h"
#include <stdlib.h>

Main_ui::Main_ui()
{
    //ctor
}

Main_ui::~Main_ui()
{
    //dtor
}



void Main_ui::startUI(){

    Main_view mainmenu;
    char input = '\0';
    while(input != 'q'){
    system("CLS");
    mainmenu.print_version();
    mainmenu.print_Header();
    mainmenu.printSelection();
    Baker_ui baker;
    Admin_ui admin;
    AdminView login;
    cout << endl;
    cin >> input;
    switch(input){
    case 'a':
    Admin_ui admin;
    login.admin_ask_login();
    //admin.passwordInput();
    login.adminscreen();
        break;
    case 'b':
        baker.Baker_menu();
        break;
    case 'p':
        break;
    case 'o':

        break;
        }

    }
}
