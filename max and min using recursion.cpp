#include <iostream>
#include <limits.h>
using namespace std;

void maxNum(int arr[],int n,int i,int& maxi) {
    if(i>=n){
        return;
    }
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    maxNum(arr,n,i+1,maxi);
    return maxi;
}

void miniNum(int arr[],int n,int i,int& mini) {
    if(i>=n){
        return;
    }
    if(arr[i]<mini){
        mini=arr[i];
    }
    miniNum(arr,n,i+1,mini);
    return mini;
}

int main() {
    int arr[5]={10,200,30,40,50};
    int n=5;
    int i=0;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    maxNum(arr,n,i,maxi);
    miniNum(arr,n,i,mini);
    cout<<"Maximum number is "<<maxi<<endl;
    cout<<"Minimum number is "<<mini<<endl;
}
