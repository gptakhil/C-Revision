
#include <iostream>

using namespace std;

// sum_difference function
void sum_difference (int * value1, int * value2) {
  int diff = 0, sum = 0;
  // Calculate sum
  sum = * value1 + * value2;
  // Calculate difference
  diff = abs(* value1 - * value2);
  * value1 = sum;
  * value2 = diff;

}
int main() {
  // Initialize value1 and value2
  int value1 = 5;
  int value2 = 4;
  // Call function sum_diff
  sum_difference( & value1, & value2);
  // Print values after calling function
  cout << "Values " << endl;
  cout << value1 << endl;
  cout << value2 << endl;

  return 0;
}
