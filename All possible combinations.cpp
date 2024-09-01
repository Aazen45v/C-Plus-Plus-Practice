#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void allPossibleComb(string str,string output,int i,int n){
    if(i>=n){
        cout<<output<<endl;
        return;
    }
    allPossibleComb(str,output,i+1,n);

    output.push_back(str[i]);
    allPossibleComb(str,output,i+1,n);
}

int main() {
    string str="Aazen";
    int n=str.length();
    string output="";
    int i=0;
    allPossibleComb(str,output,i,n);
}
