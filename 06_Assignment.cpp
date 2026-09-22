#include <iostream>
using namespace std;

class Employee
{
private:
    const char *serialNumber;
    const char *EmployeeID;
    const char *EmployeeName;
    int workExperience;
    int salary;

public:
    Employee(const char *serialNumber,
             const char *EmployeeID,
             const char *EmployeeName,
             int workExperience,
             int salary)
    {
        this->serialNumber = serialNumber;
        this->EmployeeID = EmployeeID;
        this->EmployeeName = EmployeeName;
        this->workExperience = workExperience;
        this->salary = salary;

        cout << "\nEmployee record created successfully!" << endl;
    }

    void displayD()
    {
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Employee ID: " << EmployeeID << endl;
        cout << "Employee Name: " << EmployeeName << endl;
        cout << "Work Experience: " << workExperience << " years" << endl;
        cout << "Salary: " << salary << endl;
    }

    void processR()
    {
        cout << "\nProcessing recruitment data..." << endl;

        if (workExperience >= 2)
        {
            cout << "Employee is eligible for interview." << endl;
        }
        else
        {
            cout << "Employee is not eligible for interview." << endl;
        }

        cout << "Recruitment process completed." << endl;
    }

    ~Employee()
    {
        cout << "\nEmployee record deleted successfully !!" << endl;
    }
};

int main()
{
    cout << "--- HR Recruitment Process ---" << endl;
    {
        Employee employee1("06", "2026SOC0795", "Sallu_Bhai", 1, 150);

        employee1.displayD();
        employee1.processR();

        return 0;
    }
};