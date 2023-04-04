#include <iostream>
using namespace std;

int main() {
  // printing pattern rectangle
  int n,m;
  cout<<"Enter the no of rows: ";
  cin>>n;
  cout<<"Enter the no of coloms: ";
  cin>>m;
  for(int row = 0;row<n;row++)
  {
    for(int col=0;col<m;col++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}
