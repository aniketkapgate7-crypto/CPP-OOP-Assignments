#include <iostream>
using namespace std;

class Student {
private:
    char name[100];
    char rollNumber[30];
    char course[100];
    int age;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        cin.getline(name, 100);

        cout << "Enter roll number: ";
        cin.getline(rollNumber, 30);

        cout << "Enter course name: ";
        cin.getline(course, 100);

        cout << "Enter student age: ";
        cin >> age;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Course      : " << course << endl;
        cout << "Age         : " << age << endl;
    }
};

int main() {
    Student student1;

    student1.inputDetails();
    student1.displayDetails();

    return 0;
}