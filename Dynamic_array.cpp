#include <iostream>

using namespace std;

//print array function
void printArray(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//main function
int main(){
    //Initialize variable size
    int size = 5;
    //Create array
    int * Arr = new int[size];
    //Fill elements of an array
    for (int i = 0; i < size; i++){
        Arr[i] = i;
    }
    //Call printArray
    printArray(Arr, size);
    //Create new array
    int * ResizeArray = new int[size + 2];
    //copy elements in new array
    for (int i = 0; i < size; i++){
        ResizeArray[i] = Arr[i];
    }
    //delete old array
    delete[] Arr;
    //Pointer Array Will point to ResizeArray
    Arr = ResizeArray;
    //store new values
    Arr[size] = 90;
    Arr[size + 1] = 100;
    //Call printArray function
    printArray(Arr, size + 2);
}
