#include<algorithm>
#include <iostream>
#include <string>
using namespace std;

bool cmp(char a, char b){
  return a>b;
}

int main() {
  string name="Aazen";
  sort(name.begin(),name.end(),cmp);
  cout<<name<<endl;
return 0;
}
