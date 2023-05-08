#include <iostream>
#include <vector>
using namespace std;

int main() {
  //declaring and initializing a 2d array
  int arr[3][3];
      //[row][array]

  //taking inout of elements in row-wise form
  cout<<"Taking input of elements in row-wise form"<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
    cin>>arr[row][col];
    }
    cout<<endl;
  }

  
  // //taking inout of elements in column-wise form
  // cout<<"Taking input of elements in column-wise form"<<endl;
  // for(int row=0;row<3;row++){
  //   for(int col=0;col<3;col++){
  //     cin>>arr[col][row];
  //   }
  //   cout<<endl;
  // }

  
  //printing out the elementsin row-wise form and their sum
  cout<<"printing out the elements in row-wise form"<<endl;
  for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<3;col++){
      cout<<" "<<arr[row][col];
      sum=sum+arr[row][col];
    }
    cout<<" Sum of the row is: = "<<sum;
    cout<<endl;
  }
cout<<endl;
  //printing out the elements in column-wise form and their sum
  cout<<"printing out the elements in column-wise form"<<endl;
  for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<3;col++){
      cout<<" "<<arr[col][row];
      sum=sum+arr[col][row];
    }
    cout<<" Sum of the row is: = "<<sum;
    cout<<endl;
  }
  cout<<endl;
  }
