#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
//using loop
// void reverse(string str,int n){
//     if(n<0){
//         return;
//     }
//     cout<<str[n];
//     return reverse(str,n-1);
// }


//using twopointer approach
void reverse(string &str,int start,int end){
    if(start>=end){
        return;
    }
    swap(str[start],str[end]);
    reverse(str,start+1,end-1);
}

int main() {
    string str="HELLOW HOW ARE YOU";
    int n=str.length();
    int end=n-1;
    int start=0;
    reverse(str,start,end);
    cout<<str;
}
