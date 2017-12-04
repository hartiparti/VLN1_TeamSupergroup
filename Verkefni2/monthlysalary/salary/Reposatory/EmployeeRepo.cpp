#include "EmployeeRepo.h"

#include <iostream>
using namespace std;

EmployeeRepo::EmployeeRepo()
{
    //ctor
}


void EmployeeRepo::add_employee(const Employee& employee){
     ofstream fout;
     fout.open("records.txt", ios::app);
     if(fout.is_open()){
        fout << employee;
        fout.close();
     }
     else {

        cout << "File not found";
     }


}




