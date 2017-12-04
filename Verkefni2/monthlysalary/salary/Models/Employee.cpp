#include "Employee.h"
#include <iostream>

Employee::Employee()
{
    //ctor
}


Employee::Employee(string name, string kt, double salary, int month, int year){

    this->name = name;
    this->kt = kt;
    this->salary = salary;
    this->month = month;
    this->year = year;

 }

string Employee::get_name(){

    return this->name;
}
string Employee::get_kt(){

    return this->kt;
}
double Employee::get_salary(){

    return this->salary;
}
int Employee::get_month(){

    return this->month;
}
int Employee::get_year(){
    return this->year;
}

ostream& operator << (ostream& out, const Employee& employee){
    out << employee.name << ", " << employee.kt << ", " << employee.salary << ", " << employee.month << ", " << employee.year;
    return out;

}

