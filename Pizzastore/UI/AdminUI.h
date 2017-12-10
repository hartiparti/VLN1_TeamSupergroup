#ifndef ADMINUI_H
#define ADMINUI_H

#include <string>
#include <iostream>
using namespace std;

class AdminUI
{
    public:
        AdminUI();
        void passwordInput();           /// Prompta input fyrir pw frá user
        void administrate();            /// Heldur utan um það sem administrator gerir.
        void adminscreen();
        void admin_ask_login();
        void edit_screen();

    private:
};

#endif // ADMINUI_H
