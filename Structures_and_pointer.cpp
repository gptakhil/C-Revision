#include <iostream>

using namespace std;

struct Student{
    string name;
    int roll_number;
    int marks;
};

//main function
int main(){
    struct Student s1;

    struct Student *ptr;

    ptr = &s1;
    (*ptr).name = "John";
    (*ptr).roll_number = 1;
    (*ptr).marks = 50;

    // Print value of structure member
    cout << "s1 Information:" << endl;
    cout << "Name = " << (*ptr).name << endl;
    cout << "Roll Number = " << (*ptr).roll_number << endl;
    cout << "Marks = " << (*ptr).marks << endl;


    return 0;

}
