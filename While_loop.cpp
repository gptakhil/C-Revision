#include <iostream>

using namespace std;

int main(){
    //Initialize the variable money
    int money = 20;
    //Initialize the variable icecream_price
    int icecream_price = 5;
    //Prints value of variables
    cout << "Intial money = " << money << endl;
    cout << "Ice-cream price = " << icecream_price << endl;
    // Start of the  while loop
    while(money >= icecream_price){
        //Body of the while loop
        cout << "Buy an ice-cream " << endl;
        money = money - icecream_price;
        cout << "Remaining money = " << money << endl;
    }
    //End of the while loop
    cout << "You can't buy an ice-cream" << endl;

    return 0;
}
