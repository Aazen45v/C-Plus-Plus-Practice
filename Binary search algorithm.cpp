#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  vector<int>v{1,2,3,4,5,6,7,8,9,10};
  if(binary_search(v.begin(),v.end(),7)){
    cout<<"Target found"<<endl;
  }
  else
  {
    cout<<"Target not found"<<endl;
  }
  return -1;
}
