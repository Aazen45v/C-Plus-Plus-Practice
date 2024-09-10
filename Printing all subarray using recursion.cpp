#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void subArrPart2(vector<int> &arr, int start, int end){
    if(end==arr.size()){
        return;
    }
    
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    subArrPart2(arr,start,end+1);
}

void subArr(vector<int>& arr){
    int start=0;
    for(start=0;start<arr.size();start++){
        int end=start;
        subArrPart2(arr,start,end);
    }
}

int main() {
    vector<int> arr{1,2,3,4,5};
    subArr(arr);
}
