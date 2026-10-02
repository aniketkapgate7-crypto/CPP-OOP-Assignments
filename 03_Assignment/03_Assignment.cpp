#include <iostream>
using namespace std;

class Employee {
private:
    char employeeId[30];
    char name[100];
    char department[100];
    float salary;

public:
    void inputDetails() {
        cout << "Enter employee ID: ";
        cin.getline(employeeId, 30);

        cout << "Enter employee name: ";
        cin.getline(name, 100);

        cout << "Enter department: ";
        cin.getline(department, 100);

        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID : " << employeeId << endl;
        cout << "Name        : " << name << endl;
        cout << "Department  : " << department << endl;
        cout << "Salary      : Rs. " << salary << endl;
    }
};

int main() {
    Employee employee1;

    employee1.inputDetails();
    employee1.displayDetails();

    return 0;
}