#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    int age;
    float marks;

public:
    void setDetails(int rollNumber, int age, float marks) {
        this->rollNumber = rollNumber;
        this->age = age;
        this->marks = marks;
    }

    void displayDetails() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student1;

    student1.setDetails(5, 18, 85.5);
    student1.displayDetails();

    return 0;
}