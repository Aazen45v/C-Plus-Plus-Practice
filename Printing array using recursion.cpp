#include <iostream>
using namespace std;

void printarr(int arr[],int n,int i) {
    if(i>=n){
        return;
    }
    cout<<arr[i]<<" ";
    printarr(arr,n,i+1);
}

int main() {
    int arr[5]={1,2,3,4,5};
    int n=5;
    int i=0;
    printarr(arr,n,i);
}
