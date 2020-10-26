
#include <iostream>

using namespace std;

int main() {
  // Intitialize variables
  int number = 7;
  bool isPrime = true;
  // if block
  /*Checks if the value of a `number` is less than or equal to
  1. If yes, then execute line No. 13 to 16. If no, then execute
  line No. 18*/
  if (number <= 1) {
  //Sets the value of `isPrime` to false
    isPrime = false;
  }
  // for block
  for (int counter = 2; counter <= number / 2; counter++) {
    // if block
    if (number % counter == 0) {
      isPrime = false;
      // jump to line No. 27
      break;
    }
  }
  // if-else block
  /*If isPrime = true then execute line No. 30.
  If no, then execute line No. 32*/
  if (isPrime) {
    cout << "Number is prime";
  } else {
    cout << "Number is not prime";
  }

  return 0;
}
