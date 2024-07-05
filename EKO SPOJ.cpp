#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<long long int>&trees,long long int m,long long int mid){
  long long int woodCollected=0;
  for(long long int i=0;i<trees.size();i++){
    if(trees[i]>mid){
      woodCollected+=trees[i]-mid;
    }
  }
  return woodCollected>=m;
}

long long int maxSawBlade(vector<long long int> &trees, long long int m){
  long long int start = 0;
  long long int end = *max_element(trees.begin(),trees.end());
  long long int ans = -1;
  long long int mid = start+(end-start)/2;
  while(start<=end){
    if(isPossible(trees,m,mid)){
      ans=mid;
      start = mid+1;
    } else {
      end = mid-1;
    }
    mid = start+(end-start)/2;
  }
  return ans;
}

int main() {
  long long int n,m;
  cin >> n >> m;
  vector<long long int> trees;
  while(n--){
      long long int a;
      cin >> a;
      trees.push_back(a);
  }
  cout<<maxSawBlade(trees,m)<<endl;
}
