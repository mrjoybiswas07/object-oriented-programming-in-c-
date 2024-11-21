// write a progrma to  implement a Employee class having three data members Employee id name salary tree will be two member function namely getdata and putdata You have to implement the program using singal object of the Employee and array of object of the Employee the use prameterizes constructor to initialise hte object


#include<iostream>
#include<string>
using namespace std;
class Employee {
private:
    int employeeId;
    string name;
    double salary;

public:
    Employee(int id, string empName, double empSalary) {
        employeeId = id;
        name = empName;
        salary = empSalary;
    }

    void getData() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void putData() {
        cout << "Enter employee ID: ";
        cin >> employeeId;

        cout << "Enter name: ";
        cin.ignore(); // Clear newline character
        getline(cin, name);

        cout << "Enter salary: ";
        cin >> salary;
    }
};

 int main() {
    Employee emp1(101, "Alex", 50000.0);
    cout << "Employee 1 data: " << endl;
    emp1.getData();

    const int numEmployees = 3;
    Employee employees[numEmployees] = {
        {201, "Axid", 60000.00},
        {202, "Exotic", 55000.00},
        {203, "Zonno", 50000.00}
    };

    cout << "Data of all employees: " << endl;
    for (int i = 0; i < numEmployees; ++i) {
        employees[i].getData();
        cout << endl;
    }

    return 0;
}