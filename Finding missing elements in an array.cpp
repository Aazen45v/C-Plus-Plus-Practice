#include <iostream>
#include <vector>

using namespace std;

void findingMissingElements(int ans[],int n){
  int i=0;
  while(i<n){
    int index=ans[i]-1;
    if(ans[i]!=ans[index]){
      swap(ans[i],ans[index]);
    }
    else{
      i++;
    }
  }
  cout<<"Missing elements in the array are: ";
  for(i=0;i<n;i++){
    if(ans[i]!=i+1)
    cout<<i+1<<" ";
  }
  cout<<endl;
}



int main() {
  int ans[]={1,3,5,6,3,5};
  int n=sizeof(ans)/sizeof(int);
  findingMissingElements(ans,n);
  return 0;
}
