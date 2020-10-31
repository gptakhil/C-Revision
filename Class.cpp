
#include <iostream>

using namespace std;

class Employee
{
    int a,b,c;

    public:
        int d, e;
        void setData(int a1,int b1,int c1); //Declaration
        void getData(){
            cout <<"The value of a is "<<a<<endl;
            cout <<"The value of b is "<<b<<endl;
            cout <<"The value of c is "<<c<<endl;
            cout <<"The value of d is "<<d<<endl;
            cout <<"The value of e is "<<e<<endl;
        }

};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    Employee akhil; //Creating object akhil
    akhil.setData(1,2,3);//Calling function setData
    akhil.d = 4;
    akhil.e = 5;

    akhil.getData();//Calling function getData
}
