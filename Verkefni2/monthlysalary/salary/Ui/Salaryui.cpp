#include "Salaryui.h"
#include <iostream>
#include "Employee.h"
#include "EmployeeServices.h"
#include "EmployeeRepo.h"
#include "stdlib.h"
using namespace std;

Salaryui::Salaryui()
{
    //ctor
}

void Salaryui::mainui()
{

    cout << "Welcome!" << endl;
    system("PAUSE");
    char input;
    while(input != 'q'){
        system("CLS");
        PrintScreen();
        cin >> input;
        cout << endl;
        if(input == '1')
        {       int nr_of_records;
                cout << "How many records would you like to add? ";
                cin >> nr_of_records;

                for(int i = 0; i < nr_of_records; i++){
                        try {
                                EmployeeServ_Write.add_employee(create_record());  /// Tekur ekki inn bil.
                            }
                            catch(InvalidnameExceptions){
                                system("CLS");
                                cout << "Wrong input";
                                system("PAUSE");
                            }
                            catch(InvalidssnExceptions e){
                                system("CLS");
                                cout << e.get_message();
                                system("PAUSE");
                            }
                }
                cout << endl;
                cout << "Returning to main";
                system("PAUSE");
        }
        else if(input == '2')
        {
            search_SSN();
            get_all_records();

            cout << "Returning to main" << endl;
            system("PAUSE");

        }
        else if(input == '3')
        {

          // Employee employee;
          // employee.salary_ssn_year();
        }
        else if(input == '4')
        {
           // Employee employee;
            //employee.highest_salary();
        }
        else if (input == 'q'){
            break;
        }
        else
        {
            cout << "Wrong input, try again! ";
        }

    }
}


void Salaryui::PrintScreen(){

    cout << "Press 1 for adding a salary record for an employee" << endl;
    cout << "Press 2 to get all salary records for a SSN" << endl;
    cout << "Press 3 to get a total Salary for a given year and a given SSN" << endl;
    cout << "Press 4 to get the name of the employee with the highest salary for a certain year" << endl;
    cout << "Press q to quit this program" << endl;
    cout << endl;
}

/*
void Salaryui::Get_SSN(){

    string temp;
    cout << "Enter the SSN: ";
    cin >> temp;

    vector <Employee> list_of_ssn;
    for(unsigned int i = 0; i < list_of_ssn.size(); i++)
    {
        cout << list_of_ssn[i];
    }



    vector <Employee> EmployeeServices::get_record_from_SSN(string input){

    vector <Employee> list_of_records = employee_rep.read_record_from_file();  /// Vector sem les úr read_record
    vector <Employee> find_ssn_record;                                         /// Annar vector til að fara í gegnum og "ná" kt


    for(unsigned int i = 0; i < list_of_records.size(); i++){
            if(list_of_records[i].get_kt() == input){
                find_ssn_record.push_back(list_of_records[i]);
                }
    }

    return find_ssn_record;
}

}
*/

void Salaryui::search_SSN(){                //// Virkar ekki.

    string input = " ";
    cout << "Insert an SSN to look for records ";
    cin >> input;
    vector <Employee> list_from_input = Employeeserv_Read.get_record_from_SSN(input);

    for(unsigned int i = 0; i < list_from_input.size(); i++)
    {
        cout << list_from_input[i];
    }

}

void Salaryui::get_all_records(){           /// Virkar.

    vector <Employee> records = Employeeserv_Read.print_all_records();
    for(unsigned int i = 0; i < records.size(); i++){
        cout << records[i];
    }
}

Employee Salaryui::create_record(){

    string name, kt;
    double salary;
    int month, year;

        cout << "Name: ";
        cin >> name;
        cout << "SSN: ";
        cin >> kt;

        cout << "Salary for a given month: ";
        cin >> salary;

        cout << "The month: ";
        cin >> month;

        cout << "Year: ";
        cin >> year;


        Employee employee(name, kt, salary, month, year);

        return employee;
}

