#include "Salaryui.h"
#include <iostream>
#include "Employee.h"
#include "EmployeeServices.h"

using namespace std;

Salaryui::Salaryui()
{
    //ctor
}

void Salaryui::mainui()
{
    cout << "Welcome!" << endl;
    cout << "Press 1 for adding a salary record for an employee" << endl;
    cout << "Press 2 to get all salary records for a SSN" << endl;
    cout << "Press 3 to get a total Salary for a given year and a given SSN" << endl;
    cout << "Press 4 to get the name of the employee with the highest salary for a certain year" << endl;
    cout << endl;

    char input;
    cin >> input;

    while(true)
    {
    cout << "Wrong input, try again! ";
    cin >> input;



    if(input == '1')
    {
        employee_service.add_employee(create_record());


    }
    else if(input == '2')
    {
        //Employee employee;
        //employee.salary_ssn();
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
