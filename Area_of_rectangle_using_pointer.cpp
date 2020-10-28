#include <iostream>

using namespace std;

//area function
void area(double *length, double *width, double *result){
    //Calculate area of rectangle
    *result = *length * *width;

}

//main function
int main(){
    //Initialize variables length and width
    double length = 8.9, width = 2.1;
    //Initialize variable result
    double result = 0;

    area(&length, &width, &result);
    //Print the value of result
    cout<<"result= " << result <<endl;
    return 0;
    }
