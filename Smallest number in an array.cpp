#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[]={1,8,7,20,15,18,23,4,89,48,55,78};
  int size=12;
  int max = INT_MAX;

  for(int i=0;i<size;i++){
    if(arr[i]<max){
      max=arr[i];
    }
  }
  cout<<"Smallest number is: "<<max<<endl;
}
