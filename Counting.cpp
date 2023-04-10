#include <iostream>
using namespace std;

void numbercc(int n)
{
  for(int i=0;i<n;i++){
      cout<<i+1<<" ";
  }
}


int main() {
int n;
  cin>>n;
  numbercc(n);
    return 0;
}
