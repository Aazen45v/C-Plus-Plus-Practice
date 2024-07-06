#include <iostream>
#include <string>
using namespace std;

int length(char name[]){
  int count = 0;
  int i=0;
  while(name[i] != '\0'){
    count++;
    i++;
  }
  return count;
}

void reverse(char name[]){
  int i=0;
  int n=length(name);
  int j=n-1;
  while(i<=j){
    swap(name[i],name[j]);
    i++;
    j--;
  }
}

int main() {
  char name[100];
  cin>>name;
  cout<<"Length of the string is: "<< length(name)<<endl;
  cout<<"Before reversal: "<<name<<endl;
  reverse(name);
  cout<<"After reversal: "<<name<<endl;
return 0;
}
