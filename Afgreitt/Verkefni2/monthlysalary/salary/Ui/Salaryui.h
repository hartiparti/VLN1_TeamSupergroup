#ifndef SALARYUI_H
#define SALARYUI_H
#include "Employee.h"
#include "EmployeeServices.h"


class Salaryui
{
    public:
        Salaryui();
        void mainui();
        void PrintScreen();
        void get_all_records();
        void search_SSN();


    private:
        Employee create_record();

        EmployeeServices EmployeeServ_Write;
        EmployeeServices Employeeserv_Read;



};

#endif // SALARYUI_H








