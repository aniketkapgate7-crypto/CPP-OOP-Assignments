#include<iostream>
using namespace std;

class student
{
    public:

    string name;
    int rno;
    static string clg_name;

    student(string n ,int r )
    {
        name=n;
        rno=r;
    }

    void display()
    {
        cout<<"---Student Detail---"<<endl;
        cout<<"Name of Student:  "<<name<<endl;
        cout<<"Roll.no of Student:  "<<rno<<endl;
        cout<<"College Name:  "<<clg_name<<endl;
        cout<<"\n"<<endl;
    }
};

string student::clg_name="MIT ADT University";

int main()
{
    student s1("Aniket Kapgate",05);
    s1.display();

    student s2("Tony Stark",00);
    s2.display();

    return 0;
}
