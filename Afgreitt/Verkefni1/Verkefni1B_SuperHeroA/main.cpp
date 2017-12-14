#include <iostream>
#include "SuperHero.h"
#include <fstream>





int main()
{
    string text;

    SuperHero hero;
    cin >> hero;
    cout << hero;



    ofstream fout;
    fout.open("superhero.txt", ios::app);
    if(fout.is_open())
    {
        fout << hero;
        fout.close();
    }



    cout << endl;

    string str;
    cout << "Superheroes that have been made:" << endl;
    ifstream fin;
    fin.open("superhero.txt");

    if(fin.is_open())
    {
        while(!fin.eof())
        {
        getline(fin, str);
        cout << str << endl;
        }
    }



    return 0;
}

