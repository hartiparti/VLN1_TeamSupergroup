#ifndef REGISTERUI_H
#define REGISTERUI_H
#include "RegisterServices.h"

class RegisterUI
{
    public:
        RegisterUI();
        void Register_menu();
        void get_all_orders();

    private:
        RegisterServices read_orders;
};

#endif // REGISTERUI_H
