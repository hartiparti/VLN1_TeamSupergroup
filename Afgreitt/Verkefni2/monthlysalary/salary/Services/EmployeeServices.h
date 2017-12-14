#ifndef EMPLOYEESERVICES_H
#define EMPLOYEESERVICES_H
#include "Employee.h"
#include "EmployeeRepo.h"
#include "InvalidnameExceptions.h"
#include "InvalidssnExceptions.h"

class EmployeeServices
{
    public:
        EmployeeServices();
        void add_employee(const Employee& employee); /// Komið
        vector<Employee>print_all_records();
        vector<Employee>get_record_from_SSN(string input);
        void search_for_ssn(Employee& employee);


    private:
        EmployeeRepo employee_rep;
        bool isValidName(const Employee& employee);
        bool isValidSSN(const Employee& employee); // Ekki komið
        bool isYearValid(const Employee& employee); // Ekki komið

};

#endif // EMPLOYEESERVICES_H
