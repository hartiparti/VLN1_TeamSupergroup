#ifndef BAKER_UI_H
#define BAKER_UI_H
#include "string.h"
#include <iostream>
#include "Order.h"
using namespace std;
/*�kl�ra�, �arf a� gera service klasa, sem hj�lpar a� "tagga" pizzur/pantanir sem ready e�a waiting fyrir hverja b�� */
class Baker_ui
{
    public:
        Baker_ui();
        Baker_ui(Order);
        virtual ~Baker_ui();
        void Baker_menu();
        string get_mark_status();
        string order_status();
        void Baker_header();
        void Baker_ScreenTop();
        void Baker_ScreenBottom();
        void Status();



    private:
       string mark_status;
};

#endif // BAKER_UI_H
