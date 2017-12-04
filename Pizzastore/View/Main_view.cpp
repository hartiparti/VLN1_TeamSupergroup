#include "Main_view.h"
#include "Main_ui.h"

Main_view::Main_view(){



}

void Main_view::Welcome_Screen(){

cout << "   _____                                                            __________  .__                       _____    " << endl;
cout << "  /  _  \\   __  _  __   ____     ______   ____     _____     ____   \\______   \\ |__| ________ ________   /  _  \\   " << endl;
cout << " /  /_\\  \\  \\ \\/ \\/ / _/ __ \\   /  ___/  /  _ \\   /     \\  _/ __ \\   |     ___/ |  | \\___   / \\___   /  /  /_\\  \\  " << endl;
cout << "/    |    \\  \\     /  \\  ___/   \\___ \\  (  <_> ) |  Y Y  \\ \\  ___/   |    |     |  |  /    /   /    /  /    |    \\ " << endl;
cout << "\\____|__  /   \\/\\_/    \\___  > /____  >  \\____/  |__|_|  /  \\___  >  |____|     |__| /_____ \\ /_____ \\ \\____|__  / " << endl;
cout << "        \\/                 \\/       \\/                 \\/       \\/                         \\/       \\/         \\/  " << endl;
cout << endl;
}


void Main_view::print_version(){

cout << "      *******************************************************"<< endl;
cout << "      *                                                     *"<< endl;
cout << "      *                Sales managementForce                *"<< endl;
cout << "      *                Version: 0.0.2                       *"<< endl;
cout << "      *                Date   : 29-11-2017                  *"<< endl;
cout << "      *                                                     *"<< endl;
cout << "      *******************************************************"<< endl;

}

void Main_view::print_Header(){

cout <<   "      *******************************************************" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *             |A w e S o m e P i Z z A|               *" << endl;
cout <<   "      *           -----------------------------             *" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *                                                     *" << endl;
cout <<   "      *******************************************************" << endl;
}

void Main_view::printSelection(){

cout << "      *                   a:  Admin login                   *" << endl;
cout << "      *                   b:  Baker                         *" << endl;
cout << "      *                   p:  Pickup & Register             *" << endl;
cout << "      *                   o:  Order Screen                  *" << endl;
cout << "      *                   q:  Quit                          *" << endl;
cout << "      *                                                     *" << endl;
cout << "      *******************************************************" << endl;

}
