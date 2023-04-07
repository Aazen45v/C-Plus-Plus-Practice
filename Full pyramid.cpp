#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for(int row=0;row<n;row++){
    for(int i=0;i<n-row-1;i++){
      cout<<" ";
    }
    for(int k=0;k<row+1;k++){
      cout<<"* ";
    }
    cout<<endl;
  }
}


