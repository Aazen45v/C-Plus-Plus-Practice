#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  cout << endl;

for(int row=0;row<n;row++){
  //printing spaces
  for(int col=0;col<n-row-1;col++){
    cout<<" ";
  }
  //printing numbers with spaces in between
  int start=1;
  for(int col=0;col<2*row+1;col++){
    if(row==0 || row==n-1){
      if(col%2==0){
        //even
        cout<<start;
        start++;
      }
      else{
        //odd
        cout<<" ";
      }
    }
    else{
      //first column
    if(col==0)
      cout<<"1";
      //last column
    else if(col==2*row)
      cout<<row+1;
      else
      //printing spaces
      cout<<" ";
    }
  }
  cout<<endl;
}
}
