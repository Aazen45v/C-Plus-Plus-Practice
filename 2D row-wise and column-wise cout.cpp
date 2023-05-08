#include <iostream>
#include <vector>
using namespace std;

int main() {
  //declaring and initializing a 2d array
  int arr[3][3]=
  //[row][array]
  {
  {2,3,4},
  {5,6,7},
  {8,0,9}
  };
  //printing out the elementsin row-wise form
  cout<<"printing out the elements in row-wise form"<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
  cout<<" "<<arr[row][col];
    }
    cout<<endl;
  }
cout<<endl;
  //printing out the elements in column-wise form
  cout<<"printing out the elements in column-wise form"<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
      cout<<" "<<arr[col][row];
    }
    cout<<endl;
  }
  cout<<endl;
}
