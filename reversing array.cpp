#include <iostream>
using namespace std;

int main() {
  int arr[]={1,8,7,20,15,18,23,4,89,48,55};
  int size=11;
  int start = 0;
  int end = size-1;

  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
