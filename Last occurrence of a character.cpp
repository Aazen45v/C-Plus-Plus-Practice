#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int lastoccur(string str,char ch,int n){
    if(n<0){
        return -1;
    }
    if(str[n]==ch){
        return n;
    }
    return lastoccur(str,ch,n-1);
}

int main() {
    string str="welcome";
    int n=str.length();
    char ch='e';
    int i=0;
    lastoccur(str,ch,n);
    cout << "Last occurrence of '" << ch << "' is at index: " << lastoccur(str,ch,n) << endl;
}
