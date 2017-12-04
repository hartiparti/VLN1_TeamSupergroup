#ifndef BAKER_UI_H
#define BAKER_UI_H
#include "string.h"
#include <iostream>
#include "Order.h"
using namespace std;

class Baker_ui
{
    public:
        Baker_ui();
        Baker_ui(Order);
        virtual ~Baker_ui();
        void Baker_menu();
        string get_mark_status();
        string order_status();



    private:
       string mark_status;
};

#endif // BAKER_UI_H
