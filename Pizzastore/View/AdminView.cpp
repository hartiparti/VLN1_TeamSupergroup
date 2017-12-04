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
    cout << endl << endl << endl;
    cout << "                 ------------------------------------------------------------- " << endl;
    cout << "                                   Administrator panel                         " << endl;
    cout << "                                                                               " << endl;
    cout << "                         Welcome, what would you like to do today?             " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             e: Edit menu items*NOT WORKING*                   " << endl;
    cout << "                             t: Access the toppings page                       " << endl;
    cout << "                             c: Create offer *NOT WORKING*                     " << endl;
    cout << "                             a: Create offer *NOT WORKING*                     " << endl;
    cout << "                             o: Access orders *NOT WORKING*                    " << endl;
    cout << "                             b: logout                                         " << endl;
    cout << endl;
    cout << "                 ------------------------------------------------------------- " << endl;

}

void AdminView::admin_ask_login(){
    system("CLS");
    cout << endl << endl << endl;
    cout << "                       **************************************************" << endl;
    cout << "                       *                   WARNING!                     *" << endl;
    cout << "                       *    You must be an admin to access this page    *" << endl;
    cout << "                       **************************************************" << endl;
    cout << "                                   Type in password: ";

}

void AdminView::edit_screen(){
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
