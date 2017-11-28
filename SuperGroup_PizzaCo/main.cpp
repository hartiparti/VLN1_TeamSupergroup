#include <iostream>
/*
    Dotid sem forritid tharf ad uppfylla:

      Einn vallisti sem býður upp á þá möguleika sem í boði eru
      Skrá verð á grunnpizzu
      Skrá áleggstegundir og verð á hverri
      Skrá pantaða pizzu (fá upp heildarverð)
      Merkja pizzu greidda
      Fá upp pantaða pizzu
      Merkja í vinnslu
      Merkja tilbúna
      Merkja afhenta
      Allar​ ​upplýsingar​ ​verða​ ​að​ ​haldast​ ​réttar​ ​jafnvel​ ​þó​ ​slökkt​ ​sé​ ​á​ ​kerfinu


*/
/*
        Kerfið er skrifað í C++
        Kerfið geymir upplýsingar í skrám sem liggja hjá keyrsluskrám kerfisins
        Kerfið notar C++ skráarstrauma til þess að lesa úr og skrifa í þessar skrár
        Notandaviðmót kerfisins er console forrit (textahamur)
        Kerfið notar þriggja laga hönnun þar sem sérhæfðir klasar sjá um:
        Viðmótsaðgerðir (Viðmótslag)
        Vinnslu og sameiningu ganga (Vinnslulag)
        Lestur og skrif í skrár (Gagnalag)
        Einfalda gagnaklasa sem hin lögin nota til samskipta sín á milli
        Kerfið býður upp á virkni fyrir:
        umsjónarfólk sem skráir inn vörur og verð
        sölufólk sem skráir inn pantanir
        bakara sem útbúa pantanirnar
        starfsfólk sem tekur við greiðslum og afhendir pizzur
*/






using namespace std;
const int Pick_order = 1;
const int Pick_pickup = 2;
const int Pick_sales = 3;

void Interface(){


    cout << "............Welcome to..............." << endl;
    cout <<"     |A w e S o m e P i Z z A|     " << endl;
    cout << "   ****************************   " << endl;
    cout << "    Sales managementForce 1.0    " << endl;
    cout << "   ****************************   " << endl;
    cout << "       1:  Order                  " << endl;
    cout << "       2:  Pick up                 " << endl;
    cout << "       3:  Sales & current orders   "  << endl;
    cout << "   ........................... " << endl;


}

void PickUp(){


    cout << "............Welcome to..............." << endl;
    cout <<"     |A w e S o m e P i Z z A|     " << endl;
    cout << "   ****************************   " << endl;
    cout << "    Sales managementForce 1.0    " << endl;
    cout << "   ****************************   " << endl;
    cout << "  Nr. " << " Name "  << " Status " << endl;
    cout << "  169 " << " John Johnsson" << " Done " << endl;
    cout << "  154 " << " David Davidson " << " Wating " << endl;
    cout << "  121 " << " Mike M. John" << " Waiting " << endl;
    cout << "  111 " << " Jane Joe " << " Preparing " << endl;
    cout << "  ............................. " << endl;
    cout << "      1:Up   2:Down   3:Back  "  << endl;
    cout << "  ............................ " << endl;


}

void PickUp2(){


    cout << "............Welcome to..............." << endl;
    cout <<"     |A w e S o m e P i Z z A|     " << endl;
    cout << "   ****************************   " << endl;
    cout << "    Sales managementForce 1.0    " << endl;
    cout << "   ****************************   " << endl;
    cout << "  Nr. " << " Name "  << " Status " << endl;
    cout << "  169 " << " John Johnsson" << " Done " << endl;
    cout << "  154 " << " David Davidson " << " Wating " << endl;
    cout << "  121 " << " Mike M. John" << " Waiting " << endl;
    cout << "  ............................. " << endl;
    cout << "      1:Up   2:Down   3:Back  "  << endl;
    cout << "  ............................ " << endl;


}

int main()
{

    Interface();

    int input;
    do {


    cin >> input;// Console IN some data
        if (input == 1)
        {
            input = Pick_order;
        }
        else if (input == 2)
        {
        input = Pick_pickup;


        }
        else if (input == 3)
        {
        input = Pick_sales;
         PickUp();
            cin >> input;
            if (input = 3)
            {
                break;
            }
            else
            {
                PickUp2();

            }

        }
        else {

        }
        cout << "You entered " << input << endl;
     cin.get ();
    }
    while (input !=0);









    return 0;
}


/* Aukakröfur og "bonus"
Frumkvæði nemenda fyrst og fremst
    Binary skrár:   Lestur á mörgum færslum í einu
Auðvelt og skýrt viðmót fyrir notendur
Hraðvirkt
Shorthand syntax til að búa til pantanir
Skrá eina línu af stöfum og táknum
Kerfið túlkar yfir í pizzu eða jafnvel heila pöntun
Gott að sýna pöntunina og fá staðfestingu
Betri nýting á skrám og örgjörvatíma
Sérskrá fyrir virkar pantanir
Önnur/aðrar fyrir afgreiddar pantanir (legacy)
Fleiri hlutir sem nýta betur tímann og setja virka/nýjustu hluti í forgang
Analysis á sölutölum
Þarf að lesa in batch af sölutölum á formatti frá okkur
Skrá tilboð
Hægt að velja tilboð, t.d. tvær pizzur plús gos
Fast verð
Ódýrari pizzan frí
Aðrar útfærslur?
Síðan lætur kerfið fylla inn í tilboðið
Hvaða pizza af matseðli eða
Hvaða álegg
Hvaða tegund af gosi, o.s.frv
Getur kerfið þekkt tilboðin sjálfvirkt þegar pöntun er gerð?
Mjög töff forritunarlega :)
Merkja pöntun þegar ákveðinn tími er liðinn
Drífa sig
sein
Ónýt
*/
