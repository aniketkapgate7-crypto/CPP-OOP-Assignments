#include <iostream>
using namespace std;

// Function template to find the larger of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // 1. Comparing student marks (int)
    int marks1 = 85, marks2 = 92;
    cout << "Higher Student Marks: " << getMax(marks1, marks2) << endl;

    // 2. Comparing product prices (float)
    float price1 = 499.50f, price2 = 449.99f;
    cout << "Higher Product Price: " << getMax(price1, price2) << endl;

    // 3. Comparing sensor readings (double)
    double sensor1 = 36.758, sensor2 = 36.912;
    cout << "Higher Sensor Reading: " << getMax(sensor1, sensor2) << endl;

    return 0;
}