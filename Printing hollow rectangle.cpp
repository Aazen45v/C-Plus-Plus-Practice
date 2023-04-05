#include <iostream>
using namespace std;

int main() {
  // printing hollow rectangle
  int rowCount,colmCount;
  cout<<"Enter the no of rows: ";
  cin>>rowCount;
  cout<<"Enter the no of columns: ";
  cin>>colmCount;
  for(int row = 0;row<rowCount;row++)
  {
    if(row==0 || row==rowCount-1)
    {
      for(int col=0;col<colmCount;col++)
      {
        cout<<"*";
      }
    } 
    else 
    {
      cout<<"*";
      for(int col = 0 ;col < colmCount-2; col++)
      {
        cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
