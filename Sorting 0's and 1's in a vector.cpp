#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector <int> arr{0,1,1,0,0,1,0,1,0,1,0,1,1};
  cout<<"Sorting the vector "<<endl;

    int start=arr[0];
    int end=arr.size()-1;


    while(start<=end){
          int i=0;
      if(arr[i]==0){
        swap(arr[start],arr[i]);
        start++;
        i++;
      }
      if(arr[i]==1){
        swap(arr[i],arr[end]);
        end--;
        i++;
      }
    }
    for(int i=0;i<arr.size();i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
}
