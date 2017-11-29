#ifndef MAIN_INTERFACE_H
#define MAIN_INTERFACE_H
#include <iostream>
#include "Main_interface.h"

using namespace std;


class Main_interface
{
    public:
        Main_interface();
        void startUI();
        void printScreen();
        void make_OrderScreen();
        void read_OrderScreen();
        void print_Header();
        void promptWelcome();


    private:
};

#endif // MAIN_INTERFACE_H
