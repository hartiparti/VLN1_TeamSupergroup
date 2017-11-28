#include "SuperHero.h"

SuperHero::SuperHero()
{
   name = "";
   age = 0;
   power = 'n';
}


istream& operator >> (istream& in, SuperHero& hero)
{
    cout << "What is the name of your superhero?" << endl;
    in >> hero.name;
    cout << "What is the age of your superhero?" << endl;
    in >> hero.age;
    cout << "What superpower does your superhero have?" << endl;
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
