# include <iostream>
using namespace std;

class calculator{
    float num1,num2;
    public:
    calculator(){
        num1 = 0;
        num2 = 0;
    }
    int add(float n1 , float n2){
        num1 = n1;
        num2 = n2;
        return num1 + num2;
    }

    float subtract(float n1, float n2){
        num1 = n1;
        num2 = n2;
        return num2 - num1;
    }

    float multiply(float n1, float n2){
        num1 = n1;
        num2 = n2;
        return n1*n2;
    }

    float divide(float n1, float n2){
        num1 = n1;
        num2 = n2;
        return num2/num1;
    }

};

int main(){
    calculator obj;
    cout << "Addition of 10 and 94: " << obj.add(10, 94) << endl;
    cout << "Subtraction of 10 and 94: " << obj.subtract(10, 94) << endl;
    cout << "Multiplication of 10 and 94: " << obj.multiply(10, 94) << endl;
    cout << "Division of 10 and 94: " << obj.divide(10, 94) << endl;

}
