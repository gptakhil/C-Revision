#include <iostream>

using namespace std;

//print_array function will print the values of an array
void print_array(int number[], int size){
    for(int i = 0; i < size; i++){
        cout << number[i] << " ";
    }
    cout << endl;
}
// modify_array function
void modify_array(int number[], int size){
    //Traverse array
    for (int i = 0; i < size; i++){
        //If value less than 50 set it to -1
        if (number[i] < 50)
            number[i] = -1;
    }
    cout << "Values of array inside the functions: " << endl;
    //Call print_array function
    print_array(number,size);
}

//main function

int main(){
    //Initialize size of an array
    int size = 5;
    //Initialize values of array
    int number[size] = {76,89,67,8,60};

    cout << "Values of array before function call: " << endl;
    //Call print_array function
    print_array(number,size);
    //call modify_array function
    modify_array(number,size);
    cout << "Value of array after function call: "<< endl;
    //Call print_array function
    print_array(number,size);
}
