
#include <iostream>
#include <stdlib.h> // fyrir fallid system("PAUSE")
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
