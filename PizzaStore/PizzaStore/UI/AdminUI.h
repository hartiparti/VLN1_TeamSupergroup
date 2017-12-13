#ifndef ADMINUI_H
#define ADMINUI_H

#include <stdlib.h>
#include "AdminServices.h"
#include "MainUI.h"



class AdminUI
{
    public:
        AdminUI();

        void printAdminScreen();
        void printAdminAskLogin();
        void printAccessToppings();

        void Administrate();



    private:
};

#endif // ADMINUI_H
