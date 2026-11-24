#include <iostream>
using namespace std;

class Human {
protected:
    char name[50];
    long long contact;
    int age;

public:
    void input() {
        cout << "\n---ENTER HUMAN'S DETAILS---\n";
        cout << "ENTER NAME : ";
        cin >> name;
        cout << "ENTER HUMAN AGE : ";
        cin >> age;
        cout << "ENTER HUMAN'S CONTACT : ";
        cin >> contact;
    }

    void display() {
        cout << "\n---HUMAN'S DETAILS---\n";
        cout << "\nHUMAN'S NAME : " << name;
        cout << "\nHUMAN'S AGE : " << age;
        cout << "\nHUMAN'S CONTACT : " << contact << "\n";
    }
};

class student : public Human {
protected:
    int rno;
    char branch[50];

    public:
    void get() {
        cout << "\n---ENTER STUDENT'S DETAILS---\n";
        cout << "ENTER STUDENT'S ROLL NUMBER : ";
        cin >> rno;
        cout << "ENTER STUDENT'S BRANCH : ";
        cin >> branch;
    }

    void show() {
        cout << "\n---STUDENT'S DETAILS---\n";
        cout << "\nSTUDENT'S ROLL NUMBER : " << rno;
        cout << "\nSTUDENT'S BRANCH : " << branch << "\n";
    }
};

int main() {
    student s1;
    s1.input();
    s1.get();
    s1.display();
    s1.show();
    return 0;
}


