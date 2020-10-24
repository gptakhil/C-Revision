#include <iostream>

using namespace std;

int main(){
    //Declares variable inner and outer
    int inner, outer;
    //Outer for loop
    for (outer = 2; outer <= 10; outer++){
        //Outer for loop body
        cout << "Table of " << outer << " is" <<endl;
        for (inner = 1; inner<=10; inner++ ){
            //Inner for loop body
            cout << outer << " * " << inner << " = "<< (outer * inner) << endl;
        }
        //Exit inner loop
    }
    //Exit outer loop
    return 0;
}
