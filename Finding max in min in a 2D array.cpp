#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//Creating function to find the largest number in the 2D array
int findingMax(int arr[][3],int row,int col){
  int maxi=INT_MIN;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(maxi<arr[i][j]){
        maxi=arr[i][j];
      }
    }
  }
  return maxi;
}


//Creating function to find the Minimum number in the 2D array
int findingMin(int arr[][3],int row,int col){
  int mini=INT_MAX;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(mini>arr[i][j]){
        mini=arr[i][j];
      }
    }
  }
  return mini;
}



int main() {
  //declaring and initializing a 2d array
  int arr[3][3];
      //[row][column]
  int row=3,col=3;


  //taking input of elements in row-wise form
  cout<<"Taking input of elements in row-wise form"<<endl;
  for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
    cin>>arr[row][col];
    }
    cout<<endl;
  }

  int maxNumber=findingMax(arr,row,col);
  cout<<"Maximum number is: "<<maxNumber<<endl;
  
  int minNumber=findingMin(arr,row,col);
  cout<<"Minimum number is: "<<minNumber<<endl;

}
