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
//       cout<<col+1;
//     }
//     for(col=row;col>=1;col--){
//       cout<<col;
//     }
//       cout<<endl;
//   }
// }

                              //Originial Method
  
  for(int row=0;row<n;row++){
    for(col=0;col<row+1;col++){
      cout<<col+1;
    }
    for(int col=row+1;col>1;col--){
      cout<<col-1;
    }
      cout<<endl;
  }
}

