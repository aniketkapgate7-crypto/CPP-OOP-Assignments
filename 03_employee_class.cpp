#include <iostream>
using namespace std;

class Employee {
    private:
        char name[100];
        char employeeID[30];
        char department[100];   
        float salary;

public:
    void inputDetails() {
        cout << "Enter employee name: ";
        cin.getline(name, 100);

        cout << "Enter employee ID: ";
        cin.getline(employeeID, 30);

        cout << "Enter department: ";
        cin.getline(department, 100);

        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();
    }

    void displayDetails() {
        cout << "\n--- Employee Detail ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: $" << salary << endl;
    }

};

int main() {
    Employee employee1;

    employee1.inputDetails();
    employee1.displayDetails();

    return 0;
}
