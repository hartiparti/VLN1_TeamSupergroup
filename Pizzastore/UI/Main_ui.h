#ifndef MAIN_UI_H
#define MAIN_UI_H
#include <iostream>
using namespace std;

class Main_ui
{
    public:
        Main_ui();
        virtual ~Main_ui();
        void startUI();         /// Byjar forritid

        void printStart();
        void WelcomeScreen();   /// Prentar welcome screen
        void printVersion();    /// Prentar version af forritinu
        void printHeader();    /// Prentar header
        void printSelection();


    private:
};

#endif // MAIN_UI_H
