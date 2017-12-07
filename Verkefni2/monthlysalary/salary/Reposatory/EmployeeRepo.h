#ifndef EMPLOYEEREPO_H
#define EMPLOYEEREPO_H

#include "Employee.h"
#include <vector>
using namespace std;
class EmployeeRepo
{
    public:

        EmployeeRepo();



        void add_employee_to_file(const Employee &employee);
        vector<Employee> read_record_from_file();
       // void get_social(Employee& employee);




    private:
};

#endif // EMPLOYEEREPO_H


#
