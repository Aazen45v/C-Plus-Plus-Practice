#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[]={1,8,7,20,15,18,23,4,89,48,55};
  int sizea=11;
  int brr[]={100,102,103,104,105};
  int sizeb=5;
  vector <int> ans;

  for(int i=0;i<sizea;i++){
    ans.push_back(arr[i]);
    }

  for(int i=0;i<sizeb;i++){
    ans.push_back(brr[i]);
  }

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
}
