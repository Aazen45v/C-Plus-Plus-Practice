#include <iostream>
using namespace std;

int max(int a,int b,int c)
{
  if(a>b && a>c){
  return a;
  }
  else if(b>a && b>c){
    return b;
  }
  else{
  return c;
  }
}

int main() {
int a,b,c;
  cin>>a>>b>>c;
  int maximum=max(a,b,c);
  cout<<"Max of the 3 numbers is: "<<maximum<<endl;
    return 0;
}
