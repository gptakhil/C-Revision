#include <iostream>
using namespace std;

// Function calculate_average
double average(double marks[], int size) {
  double sum = 0;
  double average = 0;
  // Add all the elements of array
  for (int i = 0; i < size; i++) {
    sum = sum + marks[i];
  }
  // Calculate average by dividing sum by size
  average = sum / size;
  return average;
}

// main function
int main() {
  // Initialize array size
  int size = 8;
  // Declare variable to store output of function
  double result;
  // Initialize array
  double number [size] = {67, 89, 56, 43, 29, 15, 90,67};
  // Call function and store its output in result
  result = average (number,size);
  // Print value of result
  cout << "average = " << result;

}
