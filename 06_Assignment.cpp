#include <iostream>
using namespace std;

class Majdoor {
    private:
    const char* serialNumber;   
    const char* MajdoorID;
    const char* MajdoorName;
    int workExperience;
    int Dihadi;

    public:
    Majdoor(const char* serialNumber,
    const char* MajdoorID   ,
    const char* MajdoorName,
    int workExperience,
    int Dihadi)
    {
    this->serialNumber = serialNumber;  
    this->MajdoorID = MajdoorID;
    this->MajdoorName = MajdoorName;
    this->workExperience = workExperience;
    this->Dihadi = Dihadi;

    cout<<"\nDihadi Majdoor record created successfully!"<<endl;
    }

    void displayD() {
        cout << "Serial Number: " << serialNumber << endl;
        cout << "Majdoor ID: " << MajdoorID << endl;
        cout << "Majdoor Name: " << MajdoorName << endl;
        cout << "Work Experience: " << workExperience << " years" << endl;
        cout << "Dihadi: " << Dihadi << endl;
    }

    void processR() {
        cout << "\nProcessing recruitment data..." << endl;

        if (workExperience >= 2) {
            cout << "Majdoor is eligible for interview." << endl;
        }
        else {
            cout << "Majdoor is not eligible for interview." << endl;
        }

        cout << "Recruitment process completed." << endl;
    }


    ~Majdoor(){
        cout<<"\nDihadi Majdoor record deleted successfully !!"<<endl;
    }
};

int main(){
    cout << "--- HR Recruitment Process ---" << endl;
    {
        Majdoor employee1("05", "2026SOC0794", "Aniket", 3, 6000000);

        employee1.displayD();
        employee1.processR();

        return 0;
    }
};