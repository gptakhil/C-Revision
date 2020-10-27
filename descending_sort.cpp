
#include <iostream>

using namespace std;

void sort_elements(int arr[],int size){
   for (int i = 0; i < size; i++) {
    // Inner loop
    for (int j = i + 1; j < size; j++) {
      // If condition
      if (arr[i] < arr[j]) {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }
}

// Function to print values of an array
void print_array(int arr[], int size) {
  // Traverse array
  for (int i = 0; i < size; i++) {
    // Print value at index i
    cout << arr[i] << " ";
  }
  cout << endl;
}

// main function
int main() {
  // Initialize size of an array
  int size = 4;
  // Initialize array elements
  int arr[size] = {10, 67, 98, 31};

  cout << "Array before sorting: " << endl;
  // Call print_array function
  print_array(arr, size);

  // Call sort_elements function
  sort_elements(arr, size);

  cout << "Array after sorting: " << endl;
  // Call print_array function
  print_array(arr, size);

  return 0;
}
