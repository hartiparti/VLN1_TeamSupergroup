# VLN1_TeamSupergroup
RU_T-113_VLN_1-Group:6
Verklegt námskeið 1 önn, hópur 6. 

Synopsis

Service system for pizza restaurant.  This a project for a 3 weeks course at our first semester in Reykjavik University in programming.

The entire system is written in C++ 

This is our first attempt at designing, using, and programming an 3 layer design structure. 

The system should: 
Store information in files that lie next to the executable files of the system
Use C++ file streams to read from and write to these files
The user interface of the system is a console application (text interface)
The system uses a three layer design where specialized classes take care of:
	
	User interface operations (UI layer)
 	Processing and unification of data (Service layer)
	Reading and writing of files (Data layer / Reposatory)
	Simple data classes that the other layers use for communication(Models)
	
The system offers functionality for
administrators that enter products and prices
sales staff that registers orders
bakers who prepare the pizzas
staff that receives the payment and delivers the orders


Our Project: 

The project is divided into a 3 layer design structure.  We have 3 so called DataClasses, they are "Ordderrepo, Pizzareepo, Toppingrrepo"  We choose to work with binary files, rather than working with text files. Using vectors was also helpfull to gain access to the data that was written.  

The structure of the program is as follows: 

LAYER 1: 	
- Main_UI:	 	The main program, where it all runs. 

- Administrator_UI:	Only the administrator can access the toppingsrepo, to add new toppings to the system through AdminService , 				there is a possibilty to improve this interface.

- Baker_UI:		From the Baker UI you can see all un-made orders, and flag them to be ready. Talks to BakerServices. 

- Register_UI: 		The register UI has the ability to call up orders via phone_nr that are ready, and finalize them 					through RegisterServices 

- OrderScreen_UI: 	The OrderScreen_UI is the interface to make an order in this system 

LAYER2: 
		
-AdminServices: 	All the functions and operations to access Administrator tasks, and the models or reposatories 

-BakerServices:		All the operations regarding the baker, see what need do be made, and flag it ready.

-RegisterServices:	All the operations regarding the register, picking up orders and finalizing them.

-OrderServices: 	All operations regarding making an order. 
	
LAYER 3:  
-Orderrepo:		Data layer for all the orders, that are written down in a binary file. 
-Toppingrepo:		Data layer that holds all active toppings that are for sale in the system.
-Pizzarepo:		Data layer that holds all the Pizzas that are made. 

Other Model classes: 

Pizza  = Only includes data regarding one pizza, read/write get/set and overloads. 
Order  =  includes all necessary data for orders, read/write get/set and overloads. 
Topping = included all the data for topping, read/write get/set and overload

Exeception classes to throw out errors, and control the input. 

In this system you can go back and forth as you wish, but only the user holding the administrator password can access that 		interface. 
	
Code Example: 
 As we worked heavily with vectors and learning as we go, here's an example of a typical code. 
   vector<Topping> toppings = list_of_toppings.retriveToppings();              
    Topping topping;
	int add_to_topping;
	cin >> add_to_topping;
	
	for(int i = 0; i < add_to_topping; i++){
        cin >> topping;
        toppings.push_back(topping);
        }

    list_of_toppings.storeToppings(toppings);
    

Motivation
In our mind we thought of creating a base system for an small Pizza Restaurant. To begin with we started on working on an Administrator interface, that only the Administrator could log-in. This project has endless possibilities for improvements. 

Installation

All the necessary requirements is included in this directory to run this program. The program should compile on all compilers. 

Agenda 
All the informations that was gathered for this project was based on our studies in the following weeks, and from our programming classes during our semester. However due to the time strain, our project has only the minimum requirements. 

Tests
Tests can be done by running the entire project, to see if the system works. 

Contributors:

Elfar Már Viggósson
Hartmann Ingvarsson
Filippus Darri Björgvinsson

Instructor:
Egill Anton Hlöðversson

License: 

Háskólinn í Reykjavík, Haust 2017

