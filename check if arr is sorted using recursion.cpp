#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

bool checkSorted(vector<int> &arr, int &n, int i){
    if(i>=n-1){
        return true;
    }
    if(arr[i+1] < arr[i]){
        return false;
    }
    return checkSorted(arr, n, i+1);
}

int main() {
    vector <int> arr{1,8,3,4,5};
    int n=arr.size();
    int i=0;
    bool ans = checkSorted(arr,n,i);
    cout<<ans;
}
