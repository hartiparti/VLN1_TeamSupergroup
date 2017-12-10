#include "Topping.h"
#include "fstream"
/* Topping er "model" klasi sem er bara "topping" */
Topping::Topping()
{
    //ctor
}

Topping::~Topping()
{
    //dtor
}

Topping::Topping(string name, double price)         /// Svo vi� getum accessa� Topping breyturnar.
{
    this->name = name;
    this->price = price;
}



void Topping::write(ofstream& fout) const {

    int stringLength = name.length() + 1;       /// vegna Null character,

    fout.write((char*)(&stringLength), sizeof(int));
    fout.write(name.c_str(), stringLength);
    fout.write((char*)(&price), sizeof(double));  /// �arf ekki a� gera r�� fyrir Null character, �etta er double.


}
void Topping::read(istream& fin){

    int stringLength;

    fin.read((char*)(&stringLength), sizeof(int));
    char *str = new char[stringLength];       /// Kviklegt fylki af st�r�inn stringLength

    fin.read(str, stringLength);

    name = str;

    fin.read((char*)(&price), sizeof(double));

    delete[]str;

}
                                                                /// Yfirskrifa << og >> til �ess a� geta prenta� � skj�, �r Model
istream& operator >> (istream& in, Topping& topping){
    cout << "Name: ";
    in >> ws;  /// til �ess a� sleppa "enter" Skrifar ekki � skr�
    getline(in, topping.name);

    cout << "Price: ";
    in >> topping.price;

    return in;
}

ostream& operator << (ostream& out, const Topping& topping){

    out <<" Topping: " << topping.name << "  " <<  " Price:" << topping.price << " Kr ";

    return out;

}
