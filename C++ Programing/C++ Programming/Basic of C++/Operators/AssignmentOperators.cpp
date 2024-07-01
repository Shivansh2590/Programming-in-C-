// C++ program to illustrate the assignment operators
#include <iostream>
using namespace std;

int main() {
    int a = 25, b = 5;

    // using operators and printing results
    cout << "a = b: " << (a = b) << endl;          // Simple Assignment
    cout << "a += b: " << (a += b) << endl;        // Plus and assign
    cout << "a -= b: " << (a -= b) << endl;        // Minus and assign
    cout << "a *= b: " << (a *= b) << endl;        // Multiply and assign
    cout << "a /= b: " << (a /= b) << endl;        // Divide and assign
    cout << "a %= b: " << (a %= b) << endl;        // Modulus and assign
    cout << "a &= b: " << (a &= b) << endl;        // AND and assign
    cout << "a |= b: " << (a |= b) << endl;        // OR and assign
    cout << "a ^= b: " << (a ^= b) << endl;        // XOR and assign

    return 0;
}

