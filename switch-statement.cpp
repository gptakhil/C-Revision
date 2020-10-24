#include <iostream>

using namespace std;

int main(){
//Initialize variable money
    int money = 6;
    switch(money){
        case 20 ... 100:
            cout << "You can gift a watch" << endl;
            break;
        case 10 ... 19:
            cout << "You can gift a comic book" << endl;
            break;
        case 5 ... 9:
            cout << "You can gift a chocolate " << endl;
            break;
        default:
            cout << "You can gift a pen " << endl;

     }
    return 0;
}
