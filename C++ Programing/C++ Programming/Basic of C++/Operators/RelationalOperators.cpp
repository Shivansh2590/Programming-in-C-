// C++ program to illustrate the relational operators
#include <iostream>
using namespace std;

int main() {
    int a = 25, b = 5;

    // using operators and printing results
    cout << "a < b  : " << (a < b) << endl;                           // Smaller than: Returns true if the left operand is less than the right operand. Else false
    cout << "a > b  : " << (a > b) << endl;                           // Greater than: Returns true if the left operand is greater than the right operand. Else false
    cout << "a <= b : " << (a <= b) << endl;                          // Less than or equal to: Returns true if the left operand is less than or equal to the right operand. Else false
    cout << "a >= b : " << (a >= b) << endl;                          // Greater than or equal to: Returns true if the left operand is greater than or equal to right operand. Else false
    cout << "a == b : " << (a == b) << endl;                          // Equal to: Returns true if both the operands are equal.
    cout << "a != b : " << (a != b) << endl;                          // Not equal to: Returns true if both the operands are NOT equal.

    return 0;
}
