
#include <iostream>

using namespace std;

int main() {
  // Initialize variable
  int number = 2002;
  int remainder = 0, reverse = 0;
  // To reverse a number store it in temp
  int temp = number;
  // while loop
  while (temp != 0) {
    // Get the last digit of temp
    remainder = temp % 10;
    // Store the remainder after the initially stored value in reverse
    reverse = reverse * 10 + remainder;
    // Remove the last digit of temp
    temp = temp / 10;
  }
  // if condition
  if (number == reverse) {
    cout << "is palindrome";
  } else {
    cout << "not a palindrome";
  }
  return 0;
}
