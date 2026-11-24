#include <iostream>
using namespace std;
class employee

{
    public:
            int Employee_ID;
            char Employee_group;
            string Employee_name;
            int Employee_salary;
    void in()
    {
        cout << "\n~~~~~~~~~~ENTER EMPLOYEE'S DETAILS~~~~~~~~~~\n"; 
        cout << "ENTER EMPLOYEE'S ID : ";
        cin >> Employee_ID;
        cout << "ENTER EMPLOYEE'S GROUP : ";
        cin >> Employee_group;
        cout << "ENTER EMPLOYEE'S NAME : ";
        cin >> Employee_name;
        cout << "ENTER EMPLOYEE'S SALARY : ";
        cin >> Employee_salary;
    }

    void display()
    {
        cout << "\n~~~~~~~~~~EMPLOYEE'S DETAILS~~~~~~~~~~\n";
        cout << "\nEMPLOYEE'S ID : " << Employee_ID;
        cout << "\nEMPLOYEE'S GROUP : " << Employee_group;
        cout << "\nEMPLOYEE'S NAME : " << Employee_name;
        cout << "\nEMPLOYEE'S SALARY : " << Employee_salary;
    }
};

int main()
{
    employee e1;
    e1.Employee_ID;
    e1.Employee_group;
    e1.Employee_name;
    e1.Employee_salary;

    e1.in();
    e1.display();

    return 0;
}