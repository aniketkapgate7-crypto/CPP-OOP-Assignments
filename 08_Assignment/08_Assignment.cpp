#include <iostream>
using namespace std;
class person{
    protected:
        char name[50];
        int age;
        long long contact;
        public:
        void input(){
            cout<<"\n---ENTER PERSON'S DETAILS---\n";
            cout<<"ENTER NAME : ";
            cin>>name;
            cout<<"ENTER AGE : ";
            cin>>age;
            cout<<"ENTER CONTACT : ";
            cin>>contact;
        }
        void display(){
            cout<<"\n---PERSON'S DETAILS---\n";
            cout<<"\nNAME : "<<name;
            cout<<"\nAGE : "<<age;
            cout<<"\nCONTACT : "<<contact<<"\n";
        }
};

class employee:public person{
    protected:
        int empid;
        char dept[50];
        public:
        void get(){
            cout<<"\n---ENTER EMPLOYEE'S DETAILS---\n";
            cout<<"ENTER EMPLOYEE ID : ";
            cin>>empid;
            cout<<"ENTER DEPARTMENT : ";
            cin>>dept;
        }
        void show(){
            cout<<"\n---EMPLOYEE'S DETAILS---\n";
            cout<<"\nEMPLOYEE ID : "<<empid;
            cout<<"\nDEPARTMENT : "<<dept<<"\n";    
        }
};

class manager:public employee{
    protected:
        char designation[50];
        int salary;
        public:
        void set(){
            cout<<"\n---ENTER MANAGER'S DETAILS---\n";
            cout<<"ENTER DESIGNATION : ";
            cin>>designation;
            cout<<"ENTER SALARY : ";
            cin>>salary;
        }
        void display1(){
            cout<<"\n---MANAGER'S DETAILS---\n";
            cout<<"\nDESIGNATION : "<<designation;
            cout<<"\nSALARY : "<<salary<<"\n";    
        }
};