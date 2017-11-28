#include <iostream>
#include <fstream>
#include <string>

const int size_of_output = 10;
using namespace std;

int check(char& choice){
    if((choice == 'n') || (choice == 'N')){
    cout << "Exiting program";
        return 1;
    }
    else if ((choice == 'y') || (choice == 'y')){
        return 2;
    }
    else {
        return 3;
    }

}

void print(ifstream& fin, string& read_line, int& counter){

            for(int i = 0; i < size_of_output; i++){
            getline(fin, read_line);
            counter++;
            cout << "Line nr: " << counter << " :";
            cout << read_line << " " << endl;
    }

}

int main()
{
    string read_line;
    char choice;
    int counter = 0;
    int start = 0;

    ifstream fin;
    fin.open("textFile.txt");
    while(start == 0){
        if(fin.is_open()){
            print(fin, read_line, counter);
            cin >> choice;
            for(int i = 0; i < size_of_output; i++){

            if (fin.eof()){
                break;
            }
            if(check(choice) == 1){
                return 0;
            }
            else if (check(choice) == 2){
                print(fin, read_line, counter);
            }
            else if (check(choice)== 3){
                break;
            }



        }


    }
    }
    cout << "End of file, exiting";
    fin.close();
    return 0;
}
