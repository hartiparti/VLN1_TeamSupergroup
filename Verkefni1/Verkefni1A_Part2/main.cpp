#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    bool start = true;
    string text;
    ofstream fout;
    fout.open("Newtextfile.txt", ios::app);

    while(start == 1) {
        getline(cin, text);
        if(text == "\\"){

            break;
        }
        fout << text << endl;

    }
        fout.close();
        return 0;

}
