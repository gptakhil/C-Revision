#include <iostream>
using namespace std;

// Recursive power function
int power(int base, int exponent) {
  // Base case
  if (exponent == 0) {
    return 1;
  }
  // Recursive case
  else
    return base * power(base, exponent - 1);
}

// main function
int main() {
  // Initialize base and exponent
  int base = 2, exponent = 4;
  // Declare variable result
  int result;
  // Call power in main and store the returned value in result
  result = power(base, exponent);
  // Print value of result
  cout << base << " raised to power " << exponent << " = " << result;
  return 0;
}
