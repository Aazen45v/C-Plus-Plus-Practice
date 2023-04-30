#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  
  cout<<"*"; 
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<"*";
    int cond = i<=n/2 ? 2*i : 2*(n-i-1);   //row wise growing phase condition : row wise shrinking phase condition
    for(int j=0;j<=cond;j++){
      if(j<=cond/2)   //colum wase growing phase condition
        cout<<j+1;
      else
        cout<<cond-j+1;     //column wise shrinking phase condition
    }
    cout<<"*";
    cout<<endl;
  }
      cout<<"*";
      cout<<endl;
}
