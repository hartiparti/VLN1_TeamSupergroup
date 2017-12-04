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
    ofstream fout;                                         /// Opna binary skrá.
    fout.open("toppings.bin", ios::binary);

    int topping_count = toppings.size();                   /// Stærðin á vector.

    fout.write((char*)(&topping_count), sizeof(int));

    for(int i = 0; i < topping_count; i++){              /// Skrifað í skrá
        toppings[i].write(fout);
    }

    fout.close();                                       /// Loka.


}



vector<Topping> Toppingrepo::retriveToppings(){

    vector<Topping> toppings;                               /// Búa til vectorinn topping, og "temp" topping.
    Topping topping;

    ifstream fin;
    fin.open("topping.bin", ios::binary);                  /// Lesa í binary skrá,

    if(fin.is_open()){

        int topping_count = toppings.size();                /// Stærðin á vector.

        fin.read((char*)(&topping_count), sizeof(int));

        for(int i = 0; i < topping_count; i++){            ///  kallað á topping.read í hvert skipti, afrit af þeim topping klasa ofan í vectorinn.
            topping.read(fin);
            toppings.push_back(topping);                   /// Afritar gögnin í hvert skipti.
        }

        fin.close();

    }
    return toppings;                                        /// Út kemur vectorinn.

}
