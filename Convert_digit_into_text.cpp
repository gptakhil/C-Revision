
#include <iostream>
using namespace std;

string digit_text (int number){
  // Declares a variable of type string
    string result ;
switch (number){
    case 0:
    result = "zero";
    break;
    case 1:
    result = "one";
    break;
    case 2:
    result = "two";
    break;
    case 3:
    result = "three";
    break;
    case 4:
    result = "four";
    break;
    case 5:
    result = "five";
    break;
    default:
    result = "invalid number";

}

return result;
}

int main() {
  int number = 3;
  cout << "number = " << number << endl;
  string text;
  text = digit_text(number);
  cout << "text = " << text << endl;
  return 0;
}
