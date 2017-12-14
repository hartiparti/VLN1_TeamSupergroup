
#include <iostream>
#include <stdlib.h> // For system(PAUSE) Probably better to implemented some other type of function for accessibility of the program.
#include <MainUI.h>
using namespace std;

int main()
{
    MainUI mainUI;
    mainUI.WelcomeScreen();
    system("PAUSE");
    mainUI.startUI();

    return 0;
}
