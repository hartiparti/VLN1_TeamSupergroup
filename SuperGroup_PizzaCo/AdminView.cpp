#include "AdminView.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

AdminView::AdminView()
{
    //ctor
}

AdminView::~AdminView()
{
    //dtor
}
void AdminView::adminscreen()
{
    system("CLS");
    cout << "                      Welcome, what would you like to do today?" << endl;
    cout << "                           e: Edit prices of menu items" << endl;
    cout << "                           t: Access the toppings page" << endl;
    cout << "                           x: Create offer" << endl;
    cout << "                           a: Create new store" << endl;
    system("PAUSE");
}

void AdminView::admin_ask_login(){
    system("CLS");
    cout << endl << endl << endl;
    cout << "                        You must be an admin to access this page." << endl;
    cout << "                       -------------------------------------------" << endl;
    cout << "                               Type in password: ";

}
