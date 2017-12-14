#ifndef MAINUI_H
#define MAINUI_H

#include "AdminUI.h"
#include "BakerUI.h"
#include "OrderScreenUI.h"
#include "RegisterUI.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

class MainUI
{
    public:
        MainUI();

void printStart();
        void WelcomeScreen();
        void printVersion();
        void printHeader();
        void printSelection();

        void startUI();

    private:
};

#endif // MAINUI_H
