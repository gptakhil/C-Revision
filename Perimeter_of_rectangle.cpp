#include<iostream>

using namespace std;

class Rectangle {

   public:
   float length, height;
   Rectangle() {
     length = 0;
     height = 0;
   }

   float perimeter() {
    return length*2  + height*2;
   }
};

int main() {

  Rectangle obj;
  float answer;
  obj.length= 3;
  obj.height= 4;
  cout << "Perimeter of rectangle: " << obj.perimeter()<<endl;
  answer = obj.perimeter();
}

