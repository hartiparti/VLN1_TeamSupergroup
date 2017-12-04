#include <iostream>
#include "Main_ui.h"
#include "Main_view.h"
#include <stdlib.h>
using namespace std;

int main()
{

   Main_view printWelcome;
   printWelcome.WelcomeScreen();
   system("PAUSE");
   Main_ui Awesomepizza;
   Awesomepizza.startUI();

    return 0;
}
