#include "Admin_ui.h"
#include <iostream>
using namespace std;


void Admin_ui::passwordInput(){
    string password = "1234";           /// Breytt � string, �ar sem int getur hreinlega overflowa�.

    string  input_password = " ";

    while(input_password != password)
    {

        cin >> input_password;
        if (input_password  !=password)
        {   cout << "                        Wrong password, try again: ";

        }
    }
}
