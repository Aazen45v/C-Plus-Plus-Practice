#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int array[500];
  cout<<"Enter "<< n <<" elemsts :";
  
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  for(int j=0;j<n;j++){
    cout<<2*array[j]<<" ";
  }
}
