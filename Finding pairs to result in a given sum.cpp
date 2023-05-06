#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> arr{1,8,7,20,15,18,23,4,48,55,20,30,13,30};

  for(int i=0;i<arr.size();i++){
    int element=arr[i];

  for(int j=1;j<arr.size();j++){
    if(element+arr[j]==43){
      cout<<"("<<element<<","<<arr[j]<<")";
        arr[j]=-1;
      }
    }
  }
}
