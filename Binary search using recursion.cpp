#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int bs(vector<int>&arr,int& start,int& end,int& key){
    if(start>end){
        return -1;
    }
    
    int mid=start+(end-start)/2;
    
    if(arr[mid]==key){
        return mid;
    }
    return (arr[mid]>key) ? bs(arr,start,end=mid-1,key) : bs(arr,start=mid+1,end,key);
}

int main() {
    vector <int> arr{1,2,3,4,5};
    int n=arr.size();
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int key=5;
    int ans = bs(arr,start,end,key);
    cout<<ans;
}
