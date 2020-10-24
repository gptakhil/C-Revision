
#include <iostream>

using namespace std;

int main() {
  // Initialize variable money
  int money = 10;
  // if condition
  if (money >= 20) {
    // if block
    cout << "You can gift a watch" << endl;
  }
  //else-if block
  else if (money >= 10) {
    // else block
    cout << "You can gift a comic book " << endl;
  }
  //else block
  else{
    cout << "You can gift a pen" << endl;
  }
  return 0;
}
