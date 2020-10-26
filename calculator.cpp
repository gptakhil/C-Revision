
#include <iostream>

using namespace std;

double add(double number1, double number2) {
  double result = number1 + number2;
  return result;
}

double subtract(double number1, double number2) {
  double result = number1 - number2;
  return result;
}

double multiply(double number1, double number2) {
  double result = number1 * number2;
  return result;
}

double divide(double number1, double number2) {
  double result = number1 / number2;
  return result;
}

double test(double number1, char operate, double number2) {
  double result;

  switch (operate) {
  case '+':
    result = add(number1, number2);
    break;

  case '-':
    result = subtract(number1, number2);
    break;

  case '*':
    result = multiply(number1, number2);
    break;

  case '/':
    result = divide(number1, number2);
    break;

  default:
    result = -1;
  }

  return result;

}

int main() {
  double number1 = 7;
  char operate = '+';
  double number2 = 8;
  double result;
  cout << number1 << operate << number2 << " = ";

  result = test(number1, operate, number2);
  cout << result;
  return 0;
}
