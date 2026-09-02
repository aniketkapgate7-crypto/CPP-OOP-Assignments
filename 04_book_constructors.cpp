#include <iostream>
using namespace std;

class Book {
private:
    const char* title;
    const char* author;
    float price;

public:
    // Default constructor
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0;
    }

    // Parameterized constructor
    Book(const char* t, const char* a, float p) {
        title = t;
        author = a;
        price = p;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    Book book1;

    Book book2("C++ Programming", "Bjarne Stroustrup", 799);

    cout << "Book 1 Details:" << endl;
    book1.display();

    cout << "\nBook 2 Details:" << endl;
    book2.display();

    return 0;
}