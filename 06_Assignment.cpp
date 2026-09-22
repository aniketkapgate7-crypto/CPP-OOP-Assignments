#include <iostream>
using namespace std;

class employee {
public:
    string name;
    int id;
    float salary;

    employee(string n, int i, float s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout<< "\n---Employee Details---" << endl;
        cout << "Employee Name:  " << name << endl;
        cout << "Employee ID:  " << id << endl;
        cout << "Employee Salary:  " << salary << endl;
    }

    ~employee() {
        cout << "\nDetails are Erased";
    }
};

int main() {
    employee e1("Thor", 67, 6000);
    e1.display();

    employee e2("Monkey D. Luffy", 14, 10000);
    e2.display();

    return 0;
}