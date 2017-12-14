#ifndef REGISTERUI_H
#define REGISTERUI_H

#include <stdlib.h>
#include "OrderServices.h"
#include "RegisterServices.h"
#include "iostream"
#include "stdlib.h"
#include "MainUI.h"
using namespace std;

class RegisterUI
{
    public:
        RegisterUI();
        void printRegisterMenu();
        void RegisterMenu();

    private:
        RegisterServices registerServices;
};

#endif // REGISTERUI_H
