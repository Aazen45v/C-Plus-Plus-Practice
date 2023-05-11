#include <iostream>
#include <vector>

using namespace std;

int main() {
int ans[]={1,6,4,-6,-7,5,-5,4,-6};

  int low=0,high=(sizeof(ans)/sizeof(int))-1;


  for(int i=0;i<9;i++){

    
    if(ans[low]<0){
      low++;
    }

    else if(ans[high]>0){
      high--;
    }  

    else{
      swap(ans[low],ans[high]);
    }
  }

  
  for(int row=0;row<9;row++){
    cout<<" "<<ans[row];
    }
}
