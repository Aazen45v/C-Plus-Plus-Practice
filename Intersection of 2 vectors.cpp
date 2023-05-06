#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> arr{1,8,7,20,15,18,23,4,89,48,55};
  vector <int> brr{100,8,103,104,15};
  vector <int> ans;

  for(int i=0;i<arr.size();i++){
    int element=arr[i];

  for(int j=0;j<brr.size();j++){
    if(element==brr[j]){
      brr[j]=-1;
      ans.push_back(element);
      }
    }
  }

//   for(int k=0;k<ans.size();k++){
//     cout<<ans[k]<<" ";
//   }
//   cout<<endl;
// }

  for(auto value:ans){
    cout<<value<<" ";
  }
  cout<<endl;
}
