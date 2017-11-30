#include "Pizza_UI.h"
#include "Pizza.h"
#include "Main_interface.h"
#include "ControlerPizza.h"
#include <stdlib.h>
Pizza_UI::Pizza_UI()
{
    //ctor
}


void Pizza_UI::make_order(){

    char input = '\0';
    cin >> input;
    system("CLS");
    Main_interface header;
    header.print_Header();

    if (input == 'm'){
        int topCnt;
            cout << "How many toppings: ";
            cin >> topCnt;
            cout << endl;
            cout << "Input topping and price: ";
            Pizza pizza(topCnt);

        for(int i = 0; i < topCnt; i++){      /// Lista yfir �leggstegundir. �ttum a� birta h�r �leggstegund, �tti a� vera til �leggstegundir og ver�.

        Topping topping;                  /// �ttum a� nota istream og lesa �r skr�.
        cin >> topping;
                                            /// Administratorinn a ad geta addad toppings.
        pizza.add_topping_to_pizza(topping);
        }

        ControlerPizza store;
        store.storePizza(pizza);
        cout << "You have finished your input of " << topCnt << " topping's and price, now returning to main menu.";
        cout << endl;
        system("PAUSE");

        }
    if (input == 'r'){
            ControlerPizza store;
            Pizza pizza = store.retrivePizza();
            system("CLS");
            Main_interface header;
            header.print_Header();
            cout << "Pizzas that have been made are: " << endl;
            cout << pizza << " ";
            cout << endl;
            system("PAUSE");
        }
     if (input =='b')
     {
         Main_interface backwards;
         backwards.startUI();
     }
}



void Pizza_UI::make_OrderScreen(){
    system("CLS");          /// Hreinsa skj�inn
    Main_interface header;  /// gera tilvik af Main_interface
    header.print_Header();  /// Prenta header.
    cout << "                                   Make Order              " << endl;
    cout << "                       ---------------------------------" << endl;
    cout << "                               m: make pizza" << endl;
    cout << "                               r: read pizza" << endl;
    cout << "                               b: go back" << endl;
    cout << "                       ----------------------------------" << endl;
}
