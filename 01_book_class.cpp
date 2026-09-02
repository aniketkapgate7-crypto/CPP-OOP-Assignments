#include <iostream>
using namespace std;

class Book {
private:
    char title[100];
    char author[100];
    char isbn[30];
    float price;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        cin.getline(title, 100);

        cout << "Enter author name: ";
        cin.getline(author, 100);

        cout << "Enter ISBN: ";
        cin.getline(isbn, 30);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore(); 
    }

    void displayDetails() {
        cout << "\n--- Book Detail ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book book;
    
    book.inputDetails();
    book.displayDetails();

    return 0;
}