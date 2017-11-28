#include <iostream>
#include <fstream>
#include <string>

//fafafafaf


using namespace std;

int main()
{
    string read_line;
    char choice;

    ifstream fin;
    fin.open("textFile.txt");

    do{
        if (fin.eof()){
            cout << "End of document";
            cout << endl;
            break;
        }

        if(fin.is_open()){
            for(int i = 0; i < sizeof(read_line); i++){
                getline(fin, read_line);
                cout << read_line << " " << endl;

                }
        }

            cout << "Do you want to continue y/n? ";


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

