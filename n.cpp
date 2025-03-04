#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(10) << "Name" << setw(100) << "Age" << endl;
    cout << setw(10) << "Alice" << setw(10) << 30 << endl;
    cout << setw(10) << "Bob"   << setw(10) << 25 << endl;
    return 0;
}
