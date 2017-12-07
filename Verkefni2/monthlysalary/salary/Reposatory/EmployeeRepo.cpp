#include "EmployeeRepo.h"

#include <vector>
#include <fstream>

using namespace std;
EmployeeRepo::EmployeeRepo(){
        //Tomur smiður.
}



void EmployeeRepo::add_employee_to_file(const Employee& employee){

    ofstream fout;
    fout.open("record.dat", ios::binary | ios:: app);
    employee.write_employees(fout);
    fout.close();


}

vector <Employee> EmployeeRepo::read_record_from_file(){
    vector <Employee> records;

    ifstream fin;
    fin.open("record.dat", ios::binary);
    Employee employee;

        if(fin.is_open()) {
                while(!fin.eof()){
                 employee.read_employees(fin);
                 if(!fin.eof()){
                    records.push_back(employee);
                 }
                }

        }

        fin.close();

        return records;

}



