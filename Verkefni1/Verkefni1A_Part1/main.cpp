#include <iostream>
#include <fstream>
#include <string>


const int size_of_output = 10;
using namespace std;

int main()
{
    string read_line;
    char choice;
    int counter = 0;

    ifstream fin;
    fin.open("textFile.txt");
    do{
        if((choice == 'n') || (choice == 'N')){
                cout << "Exiting program";
                return 0;
            }
        if(fin.is_open()){
        for(int i = 0; i < size_of_output; i++){
            getline(fin, read_line);
                if (fin.eof()){
                break;
                }
                counter++;
            cout << "Line nr: " << counter << " :";
            cout << read_line << " " << endl;
            }
            cout << "--------------------------------" << endl;
            cout << "Do you want to continue y/n? ";
            cout << endl;
            cin >> choice;
             if (fin.eof()){
                break;
                }
            }
        }while((choice != 'y') || (choice != 'n'));

            cout << "End of file, exiting";
    fin.close();
    return 0;
}
