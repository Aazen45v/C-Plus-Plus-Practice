#include<algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int a = 5;
  int *ptr =&a;
  cout<<*ptr<<endl; //To get the value stored in the address
  cout<<ptr<<endl; // To get the address of the variable
  cout<<&ptr<<endl; //address value of the box ptr
return 0;
}
