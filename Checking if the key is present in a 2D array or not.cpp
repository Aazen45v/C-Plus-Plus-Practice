#include <iostream>
#include <vector>
using namespace std;

int main() {
  //declaring and initializing a 2d array
  int arr[3][3];
      //[row][array]
  int key=9;
  int count=0;



  //taking inout of elements in row-wise form
  cout<<"Taking input of elements in row-wise form"<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
    cin>>arr[row][col];
    }
    cout<<endl;
  }

  
  //Finding out the elementsin row-wise form and their sum
  cout<<"Finding out the element in row-wise form"<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
      //if key is found in the 2D array then return this statement
      if(key==arr[row][col]){
        count++;
      cout<<"Key is found";
      }
    }
    cout<<endl;
  }

  //if key is not found then return this statement
    if(count==0){
    cout<<"Key not found";
    }
  cout<<endl;
}
