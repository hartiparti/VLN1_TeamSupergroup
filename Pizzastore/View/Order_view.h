#ifndef ORDER_VIEW_H
#define ORDER_VIEW_H
#include "OrderScr_ui.h"


class Order_view
{
    public:
        Order_view();
        void order_menu();              /// Aðal order_menu
        void select_store();            /// Eubs ig er "lausn" á fleiri en einum stað.
        void PrintStoreTitle();         /// Eins og er "lausn" á fleiri en einum stað.



    private:
};

#endif // ORDER_VIEW_H
