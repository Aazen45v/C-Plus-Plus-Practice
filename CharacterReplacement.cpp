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

// void reverse(char name[]){
//   int i=0;
//   int n=length(name);
//   int j=n-1;
//   while(i<=j){
//     swap(name[i],name[j]);
//     i++;
//     j--;
//   }
// }

void replace(char sentence[]){
  int i=0;
  int n=length(sentence);
  for(i=0;i<n;i++){
    if(sentence[i] == ' ')
      sentence[i]='@';
  }
}

int main() {
  char name[100];
  cin.getline(name,100);
  cout<<"Length of the string is: "<< length(name)<<endl;
  // cout<<"Before reversal: "<<name<<endl;
  // reverse(name);
  // cout<<"After reversal: "<<name<<endl;
  replace(name);
  cout<<"After space replacement"<<name<<endl;
return 0;
}
