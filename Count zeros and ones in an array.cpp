#include <iostream>
using namespace std;

int main() {
  int arr[]={1,0,1,1,0,0,0,1,1,0,1,1};
  int size=12;
  int numZero=0,numOne=0;

  for(int i=0;i<size;i++){
    if(arr[i]==0){
      numZero++;
    } else
      numOne++;
  }
  cout<<"Number of zeroes = "<<numZero<<" Number of Ones is = "<<numOne<<endl;
}
