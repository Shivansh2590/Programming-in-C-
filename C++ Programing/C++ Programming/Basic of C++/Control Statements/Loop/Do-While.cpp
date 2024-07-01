#include <iostream>

using namespace std;

int main() 
{
  int secretNumber = 7, guess;

  do {
    cout << "Guess the secret number (1-10): ";
    cin >> guess;

    // Check if the guess is correct
  } while (guess != secretNumber);

  cout << "Congratulations! You guessed the secret number." << endl;

  return 0;
}