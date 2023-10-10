#include "./employee.h"

Employee::Employee()
{
    this->empid = 0;
    this->name = "";
    this->salary = 300;
}

void Employee::acceptEmployee()
{
    cout << "Enter the empid = ";
    cin >> this->empid;
    cout << "Enter the name = ";
    cin >> this->name;
    cout << "Enter the salary = ";
    cin >> this->salary;
}
void Employee::displayEmployee()
{
    cout << "Empid = " << this->empid << endl;
    cout << "Name = " << this->name << endl;
    cout << "Salary = " << this->salary << endl;
}

void Employee::increment()
{
    this->salary = this->salary * 2;
}