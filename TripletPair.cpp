// #include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> PairOfSum(vector<int> arr,int m) {
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++) {
      for(int j=i+1;j<arr.size();j++){
        for(int k=j+1;k<arr.size();k++){
          if(arr[i]+arr[j]+arr[k]==m){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            ans.push_back(arr[k]);
          }
        }
      }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements to enter in array 1" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements" << endl;
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
  
    int m;
    cout << "Enter number to find its sum pair" << endl;
    cin>>m;
    vector<int> result = PairOfSum(arr, m);

    cout << "Pair leading to sum:" << endl;
  
    for(int i = 0; i < result.size(); i=i+3) {
        cout <<"("<< result[i] << ","<< result[i+1]<< ","<< result[i+2] << ")"<<endl;
    }
    cout << endl;

    return 0;
}
