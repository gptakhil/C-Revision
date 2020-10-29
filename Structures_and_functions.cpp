#include <iostream>

using namespace std;
//Student structure
struct Student{
    string name;
    int roll_number;
    int marks;
};

//Function FillStudent
Student fillstudent(string name, int roll_number, int marks){
    Student s;
    s.name = name;
    s.roll_number = roll_number;
    s.marks = marks;
    return s;
}

//PrintSturdent function prints the member of structures variable
void printStudent(struct Student s){
    cout << "Student Information" << endl;
    cout << "Name = " <<s.name << endl;
    cout << "Roll_Number" << s.roll_number << endl;
    cout << "Marks = " << s.marks <<endl;
}

int main(){
    struct Student s[100];

    s[0] = fillstudent("John",1,50);
    printStudent(s[0]);

    s[1] = fillstudent("Alice",2,43);
    printStudent(s[1]);

    return 0;
}
