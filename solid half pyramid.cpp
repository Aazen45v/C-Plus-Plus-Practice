#include <iostream>
using namespace std;


int main() {
  int n;
  cin>>n;
  for(int row=0;row<2*n-1;row++){
    // int cond=0;
    // if(row<n){  //growing phase of diamond
    //   cond=row;
    // }
    // else{
    //   cond=n-(row%n)-2;    //shrinking phase of diamond
    // }
    int cond=row<n ? row : n-(row%n)-2;
    for(int col=0;col<=cond;col++){
      cout<<"* ";
    }
    cout<<endl;
  }
}




// int main() {
//   int n;
//   cin>>n;
//   cout<<endl;
//   for(int row=0;row<n;row++){
//     for(int col=0;col<=row;col++){
//       cout<<"* ";
//     }
//     cout<<endl;
//   }
//     for(int row=n;row>0;row--){
//     for(int col=0;col<=row-2;col++){
//       cout<<"* ";
//     }
//     cout<<endl;
// }
// }
