#include <iostream>

using namespace std;

int main(){
    long int long_integer = 1000000000;
    short int short_integer=32768;
    unsigned int unsigned_integer = -10; // This will only store positive integer else give garbage value
    signed int signed_integer = -30; //This will store both positive as well as negative value
    //Display variables value
    cout << "long_integer= " << long_integer << endl;
    cout << "Short_integer= " << short_integer << endl;
    cout << "unsigned_integer=" << unsigned_integer << endl;
    cout << "signed_integer=" << signed_integer << endl;


}
