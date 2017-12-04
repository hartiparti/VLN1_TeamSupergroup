#include "Toppingrepo.h"

#include <vector>
#include <fstream>

using namespace std;

Toppingrepo::Toppingrepo()
{
    //ctor
}

Toppingrepo::~Toppingrepo()
{
    //dtor
}

void Toppingrepo::storeToppings(const vector<Topping> &toppings){
    ofstream fout;                                         /// Opna binary skr�.
    fout.open("toppings.bin", ios::binary);

    int topping_count = toppings.size();                   /// St�r�in � vector.

    fout.write((char*)(&topping_count), sizeof(int));

    for(int i = 0; i < topping_count; i++){              /// Skrifa� � skr�
        toppings[i].write(fout);
    }

    fout.close();                                       /// Loka.


}



vector<Topping> Toppingrepo::retriveToppings(){

    vector<Topping> toppings;                               /// B�a til vectorinn topping, og "temp" topping.
    Topping topping;

    ifstream fin;
    fin.open("topping.bin", ios::binary);                  /// Lesa � binary skr�,

    if(fin.is_open()){

        int topping_count = toppings.size();                /// St�r�in � vector.

        fin.read((char*)(&topping_count), sizeof(int));

        for(int i = 0; i < topping_count; i++){            ///  kalla� � topping.read � hvert skipti, afrit af �eim topping klasa ofan � vectorinn.
            topping.read(fin);
            toppings.push_back(topping);                   /// Afritar g�gnin � hvert skipti.
        }

        fin.close();

    }
    return toppings;                                        /// �t kemur vectorinn.

}
