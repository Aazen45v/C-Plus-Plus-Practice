#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int indexOfFirstOcc(vector<int> arr, int target){
    int ans=-1;
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(target==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main() {
    vector<int>arr{0,1,1,1,2,2,2,3,3,4,5};
    int target=2;
        // sort(arr.begin(), arr.end());

    int index=indexOfFirstOcc(arr, target);
    cout<<"Index of first occurrence of target is "<<index<<endl;
}
