#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    public:
        Employee();
        Employee(string name, string kt, double salary, int month, int year);

        string get_name();
        string get_kt();
        double get_salary();
        int get_month();
        int get_year();

        friend ostream& operator << (ostream& out, const Employee& employee);


    private:
        string name;
        string kt;
        double salary;
        int month;
        int year;

};

#endif // EMPLOYEE_H

