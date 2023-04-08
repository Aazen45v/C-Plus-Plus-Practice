#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

//code to print hollow pyramid  
  for(int row=0;row<n;row++){
    //printing spaces
    for(int i=0;i<n-row-1;i++){
      cout<<" ";
    }
    for(int k=0;k<2*row+1;k++){
    //printing stars
      if(k==0 || k==2*row)
        cout<<"*";
      else
        cout<<" ";
    }
    cout<<endl;
  }

//code to print inverted hollow pyramid
  
  for(int row=0;row<n;row++){
    //printing spaces
    for(int i=0;i<row;i++){
      cout<<" ";
    }
    for(int k=0;k<2*n-2*row-1;k++){
    //printing stars
      if(k==0 || k==2*n-2*row-2)
        cout<<"*";
      else
        cout<<" ";
    }
    cout<<endl;
  }
}


