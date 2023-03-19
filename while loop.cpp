#include <iostream>
#include <vector>
using namespace std;

int main() {
bool done{false};
int number{0};
while(!done){
    cout<<"enter an integer between 1 and 5"<<endl;
    cin>>number;
    if(number<=1||number>=5)
    cout<<"out of range,try again"<<endl;
    else{
        cout << "thanks" << endl;
        done=true;
    }
}
    return 0;
}
