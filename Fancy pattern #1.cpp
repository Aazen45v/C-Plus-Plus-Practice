#include <iostream>
using namespace std;


int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int indexNum = 8-i;
    int num = i+1;
    int count = num;
    for(int j=0;j<17;j++){
      if(j==indexNum && count>0){
        cout<<num;
        indexNum+=2;
        count--;
      }
      else{
        cout<<"*";
      }
    }
    cout<<endl;
  }
}
