
#include <iostream>
using namespace std;

class Distance{

    private:
        int meters;
    public:
        Distance()
        {
            meters = 0;
        }
        void displayData()
        {
            cout << "Meters value: "<<meters;
        }
        //prototype or signature
        friend void addValue(Distance &d);

};

void addValue(Distance &d)
{
    d.meters = d.meters + 5;
}

int main()
{
    Distance d1;//meters = 0
    d1.displayData();//0
    // the friend function call
    addValue(d1);//pass by refrence
    cout << endl << endl;

    d1.displayData();//5
    return 0;
}
