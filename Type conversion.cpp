// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    double avg{};
    int total{};
    int num1{},num2{},num3{};
    cout<<"Enter any 3 number to calculate total and average"<<endl;
    cin>>num1>>num2>>num3;
    total = num1+num2+num3;
    
    
    //Without type conversion
    
    avg = total/3;
    cout<<"Toatl: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
    
    //Type conversion from int to double
    
    avg = static_cast<double> (total)/3;
    cout<<"Toatl: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
    
    

    return 0;
}
