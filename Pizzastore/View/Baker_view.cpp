#include "Baker_view.h"
#include "Baker_ui.h"
/* Ennþá í vinnslu */

Baker_view::Baker_view()
{
    //ctor
}

Baker_view::~Baker_view()
{
    //dtor
}

void Baker_view::Status(){


}


void Baker_view::Baker_ScreenTop(){

cout << "      Store nr:                              Ready orders:   " << endl;
cout << "                                             Waiting orders: " << endl;
cout << "  -----------------------------------------------------------" << endl;
cout << "                                             Total orders:   " << endl;
cout << "                                                             " << endl;
cout << "                                                             " << endl;
cout << endl;

cout << "      ______________________________________________________" << endl;
cout << "      |  Order nr: 1                            | Status:  |" << endl;
cout << "      |.........................................|..........|" << endl;

}


void Baker_view::Baker_ScreenBottom(){

cout << "      |.........................................|..........|" << endl;
cout << "      |                                         |          |" << endl;
cout << "      |                                         |          |" << endl;
cout << "      |                                         |          |" << endl;
cout << "      |                                         |          |" << endl;
cout << "      |                                         |          |" << endl;
cout << "      |                                         |          |" << endl;
cout << "      |                                         |          |" << endl;
cout << "      |                                         |          |" << endl;
cout << "      *                                                    |" << endl;
cout << "      _____________________________________________________" << endl;
cout << "              r: Mark ready   b:  back  q:  Quit          " << endl;

}


void Baker_view::Baker_header(){
cout <<   "      *******************************************************" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *             |A w e S o m e P i Z z A|               *" << endl;
cout <<   "      *           -----------------------------             *" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *******************************************************" << endl;

}
