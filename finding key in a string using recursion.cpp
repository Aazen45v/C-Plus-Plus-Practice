#include <iostream>
#include <limits.h>
using namespace std;

bool strFind(string& str,int n,int i,char& key) {
    if(i>=n){
        return false;
    }
    if(str[i]==key){
        return true;
    }
    bool ans=strFind(str,n,i+1,key);
    return ans;
}

int main() {
    string str="Mohammad Aazen";
    int n=str.length();
    int i=0;
    char key='e';
    bool ans=strFind(str,n,i,key);
    cout<<"Finding key :"<<key<<": is present or not:: "<<ans;
}
