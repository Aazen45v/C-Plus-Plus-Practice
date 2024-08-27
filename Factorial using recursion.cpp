#include <iostream>
using namespace std;

int printfac(int n){
  if(n==1){
    return 1;
  }
  int ans=n*printfac(n-1);
  return ans;
}

int main() {
  int n;
  cout<<"Enter a digit to whom you want its factorial: "<<endl;
  cin>>n;
  printfac(n);
  cout<<"Factorial of "<<n<<" is "<<printfac(n)<<endl;
return 0;
}
