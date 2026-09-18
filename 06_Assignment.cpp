#include <iostream>
using namespace std;

class Employee{
    private:
    const char* serialNumber;   
    const char* employeeID;
    const char* employeeName;
    int workExperience;

    public:
    Employee(const char* serialNumber,
    const char* employeeID,
    const char* employeeName,
    int workExperience)
    {
    this->serialNumber = serialNumber;  
    this->employeeID = employeeID;
    this->employeeName = employeeName;
    this->workExperience = workExperience;

    cout<<"\nEmployee record created successfully!"<<endl;
    }

    void displayD() {
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Work Experience: " << workExperience << " years" << endl;
    }

    void processR() {
        cout << "\nProcessing recruitment data..." << endl;

        if (workExperience >= 2) {
            cout << "Employee is eligible for interview." << endl;
        }
        else {
            cout << "Employee is not eligible for interview." << endl;
        }

        cout << "Recruitment process completed." << endl;
    }


    ~Employee(){
        cout<<"\nEmployee record deleted successfully !!"<<endl;
    }
};

int main(){
    cout << "--- HR Recruitment Process ---" << endl;
    {
        Employee employee1("2026SOC0794", "2026SOC0794", "Aniket", 3);

        employee1.displayD();
        employee1.processR();
    }
};