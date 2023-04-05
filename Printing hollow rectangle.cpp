#include <iostream>
using namespace std;

int main() {
  // printing hollow rectangle
  int n,m,i;
  cout<<"Enter the no of rows: ";
  cin>>n;
  cout<<"Enter the no of columns: ";
  cin>>m;
  for(int row = 0;row<n;row++)
  {
    if(row==0 || row==n-1)
    {
      for(int col=0;col<m;col++)
      {
        cout<<"* ";
      }
    } 
    else 
    {
      cout<<"* ";
      for(i = 0 ;i < m+3; i++)
      {
        cout<<" ";
      }
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}
