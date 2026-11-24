#include <iostream>
#include <string>
using namespace std;

// Function template to swap two values by reference
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // 1. Swapping Employee IDs (int)
    int empID1 = 101, empID2 = 205;
    cout << "Before Swap - Employee IDs: " << empID1 << ", " << empID2 << endl;
    swapValues(empID1, empID2);
    cout << "After Swap  - Employee IDs: " << empID1 << ", " << empID2 << "\n\n";

    // 2. Swapping Room Numbers (string)
    string room1 = "Lab-A1", room2 = "Room-304";
    cout << "Before Swap - Room Numbers: " << room1 << ", " << room2 << endl;
    swapValues(room1, room2);
    cout << "After Swap  - Room Numbers: " << room1 << ", " << room2 << "\n\n";

    // 3. Swapping Task Priorities (char)
    char priority1 = 'H', priority2 = 'L';
    cout << "Before Swap - Task Priorities: " << priority1 << ", " << priority2 << endl;
    swapValues(priority1, priority2);
    cout << "After Swap  - Task Priorities: " << priority1 << ", " << priority2 << endl;

    return 0;
}