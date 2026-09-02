#include <iostream>
using namespace std;

class Book {
private:
    char title[100];
    char author[100];
    float price;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        cin.getline(title, 100);

        cout << "Enter author name: ";
        cin.getline(author, 100);

        cout << "Enter price: ";
        cin >> price;
    }

    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    Book book;

    book.inputDetails();
    book.displayDetails();

    return 0;
}