#include <iostream>

using namespace std;

const double pi{3.1415};

double calAreaCircle(double radius){
    return pi*radius*radius;
}


double calVolumeCylinder(double radius,double height){
    return calAreaCircle(radius)*height;
}

void volumeCylinder(){
    double radius{};
    double height{};
    cout<<"\nEnter the radius of the circle: "<<endl;
    cin>>radius;
    cout<<"\nEnter the height of the circle: "<<endl;
    cin>>height;
    
    cout<<"The volume of a cylinder with radius: "<<radius<<" and height "<<height<<" is: "<<calVolumeCylinder(radius,height)<<endl;
}



void areaCircle(){
    double radius{};
    cout<<"\nEnter the radius of the circle: "<<endl;
    cin>>radius;
    
    cout<<"The volume area of the circle with radius: "<<radius<<" is: "<<calAreaCircle(radius)<<endl;
}



int main()
{
    areaCircle();
    volumeCylinder();

    return 0;
}
