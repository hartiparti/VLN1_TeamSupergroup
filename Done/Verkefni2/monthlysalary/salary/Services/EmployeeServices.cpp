#include "EmployeeServices.h"
#include "EmployeeRepo.h"
#include "Employee.h"
#include "InvalidnameExceptions.h"
#include "InvalidssnExceptions.h"
#include <vector>
using namespace std;
#include <iostream>
EmployeeServices::EmployeeServices()
{
    //ctor
}


void EmployeeServices::add_employee(const Employee &employee){      /// Virkar
    // validate car
        if(isValidName(employee))
        {
            employee_rep.add_employee_to_file(employee);

        }


}
vector<Employee> EmployeeServices::print_all_records(){

    vector<Employee> records = employee_rep.read_record_from_file();
    return records;

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

/*
bool EmployeeServices::isYearValid(const Employee& employee){

        bool valid = true;
        int month = employee.get_month;
        if(!(month <= 0 && month => 12))
        {
            valid = false;
        }


        return true;

}
*/
/*
bool EmployeeServices::isValidSSN(const Employee& employee){    /// Virkar ekki...

        string check_kt = employee.get_kt();
        for(unsigned int i = 0; i < check_kt().length(); i++){
                //(!isdigit(temp)){
                if(check_kt.size()) > 10){

                    throw (InvalidssnExceptions("Not a valid SSN"));
                }
        }


    return true;
}

*/
bool EmployeeServices::isValidName(const Employee& employee){           /// Virkar.
        string name = employee.get_name();
        for (unsigned int i = 0; i < name.length(); i++){
            if (!isalpha(name[i])){
                throw InvalidnameExceptions();
            }

        }
        return true;

}
