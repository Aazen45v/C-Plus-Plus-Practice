// #include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int arr[11]= {0,1,1,0,2,2,0,1,0,2,1};
    int start=0;
    int end=11;
    int i=0;
    while(i<end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else if(arr[i]==1){
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
    }

    for(int j=0;j<11;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
