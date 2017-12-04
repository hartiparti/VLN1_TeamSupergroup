#include "EmployeeServices.h"
#include "EmployeeRepo.h"
using namespace std;
#include <iostream>
EmployeeServices::EmployeeServices()
{
    //ctor
}



void EmployeeServices::add_employee(const Employee& employee){
    // validate car

    EmployeeRepo add;
    add.add_employee(employee);

    cout << employee << endl;
}



