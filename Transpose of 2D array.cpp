#include <iostream>
#include <vector>
using namespace std;

//Creating function to transpose a 2D array
void transpose(int arr[][3],int row,int col,int transposeArr[][3]){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      // swap(arr[i][j], arr[j][i]);
      transposeArr[j][i]=arr[i][j];
    }
  }
}

void printArray(int arr[][3],int row,int col){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
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

  cout<<"Before transpose"<<endl;
  printArray(arr,row,col);
  int transposeArr[3][3];
  transpose(arr,row,col,transposeArr);
  cout<<"After transpose"<<endl;
  printArray(transposeArr,row,col);
}
