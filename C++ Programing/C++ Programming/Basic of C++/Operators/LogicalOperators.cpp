// C++ program to illustrate the logical operators
#include <iostream>
using namespace std;

int main() {
    int a = 25, b = 5;

    // using operators and printing results
    cout << "a && b : " << (a && b) << endl;                   // Logical And: Returns true if both the operands are true.
    cout << "a || b : " << (a || b) << endl;                   // Logical Or: Returns true if both or any of the operands is true.
    cout << "!a : " << (!a) << endl;                           // Logical Not: Returns true if the operand is false.

    return 0;
}
