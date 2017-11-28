#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <string>

using namespace std;

class SuperHero
{

    private:
        string name;
        int age;
        char power;
    public:
        SuperHero();
        friend ostream& operator << (ostream& out,const SuperHero hero);
        friend istream& operator >> (istream& in, SuperHero& hero);
};

#endif // SUPERHERO_H

