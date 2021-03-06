#include "AdminUI.h"
#include "AdminServices.h"

AdminUI::AdminUI()
{

}


void AdminUI::printAccessToppings()
{
    system("CLS");
    cout << endl << endl << endl;
    cout << "                                   Access toppings                             " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << "                             r: read current list of toppings                  " << endl;
    cout << "                             a: add toppings to system                         " << endl;
    cout << "                             p: add pizza to menu                              " << endl;
    cout << "                             v: view pizzas on menu                            " << endl;
    cout << "                             b: go back                                        " << endl;
    cout << "                           ***********************************                 " << endl;
    cout << endl;
}


void AdminUI::Administrate()
{
        AdminUI adminUI;
        AdminServices adminServices;
        printAccessToppings();

        char input;
        cin >> input;
        while(true)
        {
            if (input == 'r')
            {
                system("CLS");
                cout << "This is the current list of toppings: " << endl;
                cout << "---------------------------------------" << endl;
                adminServices.displayAllToppings();
                cout << endl;
                cout << "b: back  q: quit " << endl;
                char input;
                cin >> input;
                if(input == 'b'){

                    adminUI.Administrate();

                }
                else if(input == 'q'){
                    exit(1);
                }
            }
            else if (input == 'a')
            {
                system("CLS");
                adminServices.addToToppings();
                cout << " Finished adding toppings " << endl;
                cout << "b: back  q: quit " << endl;
                char input;
                cin >> input;
                if(input == 'b'){

                    adminUI.Administrate();

                }
                else if(input == 'q'){
                    exit(1);
                }
            }
            else if(input == 'b')
            {
                MainUI goBack;
                goBack.startUI();
            }
            else if(input == 'p')
            {
                cout << "Add new Pizza to menu" << endl;
                string name;
                cout << "Name: ";
                cin >> name;
                double price;
                cout << "Price: ";
                cin >> price;

                unsigned int toppingCount;
                cout << "How many toppings? ";
                cin >> toppingCount;
                vector<Topping> toppings;
                int status = 0;
                // TODO: Instead custom Toppings get avalable toppings
                for(int i = 0; i < toppingCount; i++)
                {
                    string toppingName;
                    cout << "Topping nr. " << i << endl;
                    cout << "\tName: ";
                    cin >> toppingName;

                    double toppingPrice;
                    cout << "\tPrice: ";
                    cin >> toppingPrice;
                    Topping newTopping(toppingName, toppingPrice);
                    toppings.push_back(newTopping);
                }
                Pizza pizza(name, price, toppings.size(), toppings, status);

                // TODO> In stanicate in Cunstructor
                PizzaService pizzaService;
                try
                {
                    pizzaService.addPizzaToMenu(pizza);
                }
                catch(exception ex)
                {
                    cout << "Unable to add Pizza to Repository" << endl;
                }
                                cout << "b: back  q: quit " << endl;
                char input;
                cin >> input;
                if(input == 'b'){

                    adminUI.Administrate();

                }
                else if(input == 'q'){
                    exit(1);
                }


            }
            else if(input == 'v')
            {
                PizzaService pizzaService;
                vector<Pizza> myMenuPizzas =  pizzaService.getPizzasFromMenu();
                for(int i = 0; i < myMenuPizzas.size(); i++)
                {
                    cout << "Pizza nr. " << i+1 << endl;
                    cout << myMenuPizzas.at(i).getName() << " Price: " << myMenuPizzas.at(i).getPrice() << endl;


                }
                    cout << endl;
                    cout << "b: back  q: quit " << endl;
                    char input;
                    cin >> input;
                if(input == 'b'){

                    adminUI.Administrate();

                }
                else if(input == 'q'){
                    exit(1);
                }
            }
            else
            {
                cout << "Unknown input" << endl;
                system("PAUSE");
                Administrate();
                break;
            }


        }
}


/*
        printAccessToppings();
        AdminServices adminServices;
        char input;
        cin >> input;
        while(true)
        {
            if (input == 'r')
            {
                system("CLS");
                cout << "This is the current list of toppings: " << endl;
                cout << "---------------------------------------" << endl;
                adminServices.displayAllToppings();
                cout << endl;
                system("PAUSE");
                return;
            }
            else if (input == 'a')
            {
                system("CLS");
                adminServices.addToToppings();
                cout << " Finished adding toppings " << endl;
                system("PAUSE");
                break;
            }
            else if(input == 'b')
            {
                MainUI goBack;
                goBack.startUI();
            }
    else if(input == 'p')
    {
        cout << "Add new Pizza to menu" << endl;
        string name;
        cout << "Name: ";
        cin >> name;
        double price;
        cout << "Price: ";
        cin >> price;

        unsigned int toppingCount;
        cout << "How many toppings? ";
        cin >> toppingCount;
        vector<Topping> toppings;
        // TODO: Instead custom Toppings get avalable toppings

        for(int i = 0; i < toppingCount; i++)
        {
            string toppingName;
            cout << "Topping nr. " << i << endl;
            cout << "\tName: ";
            cin >> toppingName;

            double toppingPrice;
            cout << "\tPrice: ";
            cin >> toppingPrice;
            Topping newTopping(toppingName, toppingPrice);
            toppings.push_back(newTopping);
        }
        Pizza pizza(name, price, toppings.size(), toppings);

        // TODO> In stanicate in Cunstructor
        PizzaService pizzaService;
        try
        {
            pizzaService.addPizzaToMenu(pizza);
        }
        catch(exception ex)
        {
            cout << "Unable to add Pizza to Repository" << endl;
        }

    }
    else if(input == 'v')
    {
        PizzaService pizzaService;
        vector<Pizza> myMenuPizzas =  pizzaService.getPizzasFromMenu();
        for(int i = 0; i < myMenuPizzas.size(); i++){
            cout << "Pizza nr. " << i+1 << endl;
            cout << myMenuPizzas.at(i).getName() << " Price: " << myMenuPizzas.at(i).getPrice() << endl;
            system("PAUSE");

        }
        cout << endl;
    }

            else
            {
                cout << "Unknown input";
            }

        }
    }

    else
    {
        cout << "invalid input";
    }
}
*/
