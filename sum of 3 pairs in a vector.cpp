#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> arr{1,8,7,20,15,18,23,4,48,55,20,30,13,30};
  int sum;
  cout<<"Enter the number to finds pairs that result in the sum:";
  cin>>sum;

  for(int i=0;i<arr.size();i++){
    int element=arr[i];

    for(int j=1;j<arr.size();j++){
      int element2=arr[j];

      for(int k=0;k<arr.size();k++){
        if(element+element2+arr[k]==sum){
          cout<<"("<<element<<","<<arr[j]<<","<<arr[k]<<")";
            arr[j]=-1;      
        }
      }
    }
  }
}
