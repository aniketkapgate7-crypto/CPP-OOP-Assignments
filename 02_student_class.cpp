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

        cout << "Enter course: ";
        cin.getline(course, 100);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }
    void displayDetails() {
        cout << "\n--- Student Detail ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student;
    
    student.inputDetails();
    student.displayDetails();

    return 0;
}
