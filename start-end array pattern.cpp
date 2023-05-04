#include <iostream>
using namespace std;

int main() {
  int arr[]={1,8,7,20,15,18,23,4,89,48,55,78};
  int size=12;
  int start = 0;
  int end = size-1;

  while(true){
    if(start>end)
      break;
    cout<<arr[start]<<" ";
    cout<<arr[end]<<" ";
    start++;
    end--;
  }
  return 0;
}
