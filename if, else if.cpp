#include <iostream>
using namespace std;

int main() {
int length{},width{},height{};
const int tier1{100},tier2{500},maxDimension{10};
double surcharge1{0.10},surcharge2{0.25},baseCost{2.50};

int packageVolume{};
cout<<"Please enter the dimensions of your package"<<endl;
cout<<"length,height,width"<<endl;
cin>>length>>width>>height;

if(length > maxDimension || height > maxDimension || width > maxDimension){
    cout<<"sorry your package cannot be processed due to its dimensions"<<endl;
} else {
    double packageCost{};
    packageVolume=length*height*width;
    packageCost=baseCost;
    
    if(packageVolume>tier2){
    packageCost+=packageCost*surcharge2;
    } else if(packageVolume>tier1){
    packageCost+=packageCost*surcharge1;
    }
    
    cout<<"Your package will cost $"<<packageCost<<endl;   
}
    return 0;
}
