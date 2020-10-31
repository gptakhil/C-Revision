
#include <iostream>

using namespace std;
int SumAllOdds(int arr[],int size){
    int sum = 0;
    for (int i = 0; i<size; i++){
        if(arr[i]%2!=0){
            sum = sum+arr[i];
        }
    }
    return sum;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9},size=9,result;
    cout<<"Array of elements" << endl;
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout <<"\nPrint the sum of all odd numbers in array"<<endl;
    result = SumAllOdds(arr,size);

    cout << result;

}
