#include <iostream>
#include <conio.h>

using namespace std;

class student {
    int a, b; // Private member variables
public:
    void setData();
    void getData();
};

// Use class member variables directly
void student::setData() {
    a = 4;
    b = 4;
}

// Access and display the values of class member variables
void student::getData() {
    cout << "Sum of a and b: " << a + b << endl;
}

int main() {
    student c;
    c.setData();   // Initialize the values of a and b
    c.getData();   // Print the sum of a and b
    return 0;
}
