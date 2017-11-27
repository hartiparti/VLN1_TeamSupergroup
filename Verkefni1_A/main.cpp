#include <iostream>
#include <fstream>
#include <string>
using namespace std;
const char max_size = 10;

int main()
{
    char choice;
    string str;
    ifstream fin;
    fin.open("Textfile.txt");

    do {
        if (fin.is_open())
        {
            for(int i = 0; i < max_size; i++){
                getline(fin, str);
                cout << str << endl;
                cin >> choice;
                }

                    if ((choice == 'n')||(choice = 'N'))
                    {
                    return 0;
                    }
                    cout << endl;
                    cout << "Continue? y/n" << endl;
        }
        /*

        */

        }
        while ((choice != 'y') && (choice != 'Y'));

        fin.close();

    return 0;
}
