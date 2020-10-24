#include <iostream>

using namespace std;

int main(){
    int money = 10;
    string result;

    result = (money >= 20) ? "You can gift a watch" : "You can gift a pen ";

    cout << result;
    return 0;

}
