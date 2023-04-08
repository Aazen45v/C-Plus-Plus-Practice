#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  for(int row=0;row<n;row++){
    //upper left half asteric pyramid
    for(int i=0;i<n-row;i++){
      cout<<"*";
    }
    //upper space pyramid
    for(int k=0;k<2*row+1;k++){
        cout<<" ";
    }
    //upper right asteric half pyramid
    for(int i=0;i<n-row;i++){
      cout<<"*";
    }
    cout<<endl;
  }
  
  for(int row=0;row<n;row++){
    //lower left half asteric pyramid
    for(int i=0;i<row+1;i++){
      cout<<"*";
    }
    //lower centre space pyramid
    for(int k=0;k<2*n-2*row-1;k++){
      cout<<" ";
    }
    //lower right half asteric pyramid
    for(int i=0;i<row+1;i++){
      cout<<"*";
    }
      cout<<endl;
  }
}
