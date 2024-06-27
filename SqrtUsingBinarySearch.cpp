#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sqrRoot(int target){
    int ans=-1;
    int start=0;
    int end=target;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(target==mid*mid){
            ans=mid;
            break;
            // end=mid-1;
        }
        else if(target>(mid*mid)){
            ans=mid;
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
    // vector<int>arr{1,2,3,4,5,6,8,12,23,26,45,56,78,89,90,100};
    int target=150;
        // sort(arr.begin(), arr.end());

    int index=sqrRoot(target);
    cout<<"Square root of the target is: "<<index<<endl;
}
