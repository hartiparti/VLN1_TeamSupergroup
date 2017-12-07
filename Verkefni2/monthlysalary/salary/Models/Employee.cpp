#include "Employee.h"
#include "EmployeeRepo.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
Employee::Employee(){

}


Employee::Employee(string name, string kt, double salary, int month, int year){

    this->name = name;
    this->kt = kt;
    this->salary = salary;
    this->month = month;
    this->year = year;


 }


 void Employee::write_employees(ofstream& fout) const{


    int string_length_name = name.length() + 1;
    fout.write((char*)(&string_length_name), sizeof(int));
    fout.write(name.c_str(), string_length_name);

    int string_length_kt = kt.length();
    fout.write((char*)(&string_length_kt), sizeof(int));
    fout.write(kt.c_str(), string_length_kt);

    fout.write((char*)(&salary), sizeof(double));
    fout.write((char*)(&month), sizeof(int));
    fout.write((char*)(&year), sizeof(int));;


}


void Employee::read_employees(ifstream& fin){

    int string_length_name = name.length();
    fin.read((char*)(&string_length_name), sizeof(int));
    char *str_temp1 = new char[string_length_name];       /// Kviklegt fylki af stærðinn stringLength
    fin.read(str_temp1, string_length_name);

    name = str_temp1;

    int string_length_kt = kt.length();
    fin.read((char*)(&string_length_kt), sizeof(int));
    char *str_temp2 = new char[string_length_kt];
    fin.read(str_temp2, string_length_kt);

    kt = str_temp2;

    fin.read((char*)(&salary), sizeof(double));
    fin.read((char*)(&month), sizeof(int));
    fin.read((char*)(&year), sizeof(int));

    delete[] str_temp1;          /// Ekki gleyma ad eyda.
    delete[] str_temp2;


}


string Employee::get_name()const{

    return this->name;
}
string Employee::get_kt()const{

    return this->kt;
}
double Employee::get_salary()const{

    return this->salary;
}
int Employee::get_month()const{

    return this->month;
}
int Employee::get_year()const{
    return this->year;
}

ostream& operator << (ostream& out, const Employee& employee){

    cout << "Name: "; out << employee.name << endl;
    cout << "SSN: "; out << employee.kt << endl;
    cout << "Salary for a given month: " << out << employee.salary << endl;
    cout << "Month: " << out << employee.month << endl;
    cout << "Year: " << out << employee.year << endl;
    cout << endl;

    return out;

}

 istream& operator >> (istream& in, Employee& employee){
    in >> ws;
    getline(in, employee.name);     // Getline til að fá nafnið með whitespace
    in >> employee.kt;
    in >> employee.salary;
    in >> employee.month;
    in >> employee.year;
    return in;

 }

