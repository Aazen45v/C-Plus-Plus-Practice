#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  cout<<endl;

  
  for(int row=0;row<n;row++){
    for(int col=0;col<row+1;col++){
      cout<<row+1;
        if(col!=row)
          cout<<"*";
    }
      cout<<endl;
  }
  
  

  for(int row=0;row<n;row++){
    for(int col=0;col<n-row;col++){
      cout<<n-row;
        if(col!=n-row-1)
          cout<<"*";
    }
      cout<<endl;
  }

  
}
