/*#include <iostream>
using namespace std;

int main()
{
  int arr[] = { 5, 10, 8, 4 };
  int* p = (arr + 1);
  cout << *p + 2 <<endl;
  cout << *arr + 10;
  return 0;
}*/

#include <iostream>
using namespace std;
void cube(int *a){
  if(a != NULL){
    *a = (*a) * (*a) * (*a);
  }
}

int main() {
  int *p = new int(2);
  cube(p);
  cout << *p;
}

