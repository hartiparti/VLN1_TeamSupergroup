#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class Employee
{
    public:

        Employee();
        Employee(string name, string kt, double salary, int month, int year);

        string get_name() const;
        string get_kt() const;
        double get_salary() const;
        int get_month() const;
        int get_year() const;

        void read_employees(ifstream& fin);
        void write_employees(ofstream& fout) const;

        friend ostream& operator << (ostream& out, const Employee& employee);
        friend istream& operator >> (istream& in, Employee& employee);


    private:
        string name;
        string kt;
        double salary;
        int month;
        int year;

};

#endif // EMPLOYEE_H

