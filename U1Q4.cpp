#include <iostream>
using namespace std;

class Employee
{
public:
    int employeeId;

private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    void displaySalary()
    {
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;

    e1.employeeId = 101;
    e1.setSalary(50000);

    cout << "Employee ID: " << e1.employeeId << endl;

    e1.displaySalary();

    // cout << e1.salary;  // Error: salary is private

    return 0;
}