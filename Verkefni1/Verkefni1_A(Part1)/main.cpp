#include <iostream>
#include <fstream>
#include <string>

//fafafafaf

const int Max_Lines = 10;

using namespace std;

int main()
{
    string read_10_lines;
    char choice;

    ifstream fin;
    fin.open("textFile.txt");

    do{
        if (fin.eof()){                                     /// If setning sem tjekkar hvort vid erum kominn i botn a skjalinu, ef svo tha brjota loopu.
            cout << "End of document";
            cout << endl;
            break;
        }

        if(fin.is_open()){                                         /// "Opna skjalid og itra med for-loopu til thess ad fa 10 linur
            for(int i = 0; i < Max_Lines; i++){
                cout << "Line nr: " << i + 1 << " ";        /// Til thess ad sja hvada linu vid erum ad prenta
                getline(fin, read_10_lines);
                cout << read_10_lines << " " << endl;

                }
        }

            cout << "Do you want to continue y/n? ";                /// Y og hvada char sem er, fyrir utan "n" heldur afram thar til skjalid endar.

        do{
            cin >> choice;
            if((choice == 'n') || (choice == 'N')){
                cout << endl;
                cout << "Exiting program";
                return 0;
            }
            else{
                break;
            }
        }while(choice != 'y');

    }while(choice != 'n');

    fin.close();


    return 0;

}

