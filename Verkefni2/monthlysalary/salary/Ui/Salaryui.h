#ifndef SALARYUI_H
#define SALARYUI_H
#include "Employee.h"
#include "EmployeeServices.h"


class Salaryui
{
    public:
        Salaryui();
        void mainui();

    private:
        Employee create_record();
        EmployeeServices employee_service;
};

#endif // SALARYUI_H








