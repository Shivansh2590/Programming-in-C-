#include <iostream>

using namespace std;

int main() {
  for (int i = 1; i <= 10; i++) {
    // Skip printing even numbers using continue
    if (i % 2 == 0) {
      continue;
    }
    cout << i << " ";
  }

  cout << endl;

  return 0;
}