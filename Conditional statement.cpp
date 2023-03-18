#include <iostream>
using namespace std;

int main() {
int num1{},num2{};

cout<<"Enter the 2 numbers among which you want to find the largest and the smallest"<<endl;
cin>>num1>>num2;
if(num1!=num2){
    cout<<"Largest:"<<((num1>num2)? num1:num2)<<endl;
    cout<<"Smallest:"<<((num1>num2)? num2:num1)<<endl;
}
else
cout<<"Both numbers are same"<<endl;
    return 0;
}
