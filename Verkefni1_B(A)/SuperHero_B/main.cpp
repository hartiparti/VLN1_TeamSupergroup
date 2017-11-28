#include <fstream>
#include <string>
#include <iostream>
#include <string>

using namespace std;

class SuperHero
{

    private:
        char name[32];
        int age;
        char power;
    public:
        SuperHero();
        friend ostream& operator << (ostream& out,const SuperHero hero);
        friend istream& operator >> (istream& in, SuperHero& hero);
};



int main()
{
    int nr_of_heroes = 0;
    cout << "How many SuperHeros? ";
    cin >> nr_of_heroes;
    SuperHero hero;

    ofstream fout;
    fout.open("Binaryfile_dataclass.dat", ios::binary | ios:: app);
    for (int i = 0; i < nr_of_heroes; i++){
            cin >> hero;
            fout.write((char*)(&hero), sizeof(SuperHero));
           }

    fout.close();

    ifstream fin;
    fin.open("Binaryfile_dataclass.dat", ios::binary | ios:: app);

    if(fin.is_open()) {
        fin.seekg(0, fin.end);
        int records = fin.tellg() / sizeof(SuperHero);
        fin.seekg(0, fin.beg);

        for(int i = 0; i < records; i++){
        fin.read((char*)(&hero), sizeof(SuperHero));
        cout << endl;
        cout << hero;
        }
    }

    else {
        cout << "no";
    }
    fin.close();


    return 0;
}




SuperHero::SuperHero()
{
   name[0] = '\0';
   age = 0;
   power = 'n';
}



istream& operator >> (istream& in, SuperHero& hero)
{
    in >> hero.name;
    in >> hero.age;
    in >> hero.power;
    return in;
}

ostream& operator << (ostream& out,const SuperHero hero)
{

    out << hero.name << " " << "(" << hero.age << "): ";

    if(hero.power == 'f')
    {
        out << "Flying" << endl;
    }
    else if(hero.power == 'g')
    {
        out << "Giant" << endl;
    }
    else if(hero.power == 'h')
    {
        out << "Hacker" << endl;
    }
    else if(hero.power == 'n')
    {
        out << "None" << endl;
    }

    else out << "Weakling" << endl;

    return out;

}

