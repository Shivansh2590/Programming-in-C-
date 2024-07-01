#include <iostream>

using namespace std;

int main() {
  char operation;
  int num1, num2;

  cout << "Enter two numbers (separated by a space): ";
  cin >> num1 >> num2;

  cout << "Enter an operation (+ for addition, - for subtraction): ";
  cin >> operation;

  int result;

  // Perform addition or subtraction based on user input
  switch (operation) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    default:
      cout << "Invalid operation. Please enter + or -." << endl;
      return 1; // Indicate error (non-zero return)
  }

  cout << "The result is: " << result << endl;

  return 0;
}