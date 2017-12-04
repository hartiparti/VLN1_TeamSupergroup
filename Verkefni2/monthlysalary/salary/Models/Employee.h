#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>


class Employee
{
    public:
        Employee();
        virtual ~Employee();

    private:
        string name;
        int kt;
        double salary;
        int month;
        int year;

};

#endif // EMPLOYEE_H
