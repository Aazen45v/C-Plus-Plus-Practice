#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of rows: ";
  cin>>n;
  cout<<endl;

                                //Love bubbar method
//   for(int row=0;row<n;row++){
//     int col;
//     for(col=0;col<row+1;col++){
//       int ans= col+1;
//       char ch= ans + 'A' -1;
//       cout<<ch;
//       }
//     for(col=row;col>=1;col--){
//       int ans= col;
//       char ch= ans + 'A' -1;
//       cout<<ch;
//       }
//       cout<<endl;
//   }
// }

                              //Originial Method
  
  for(int row=0;row<n;row++){
    for(int col=0;col<row+1;col++){
      int ans= col+1;
      char ch= ans + 'A' -1;
      cout<<ch;
    }
    for(int col=row+1;col>1;col--){
      int ans= col;
      char ch= ans + 'A' -2;
      cout<<ch;
    }
      cout<<endl;
  }
}

