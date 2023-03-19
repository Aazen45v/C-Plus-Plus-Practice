#include <iostream>
#include <vector>  //this is optional
using namespace std;

int main()
{
char selection{};
do{
    double width{},height{};
    cout<<"Enter width and height separated by a space"<<endl;
    cin>>width>>height;
    double area{width*height};
    cout<<"The area is"<<area<<endl;
    
    cout<<"Calculate another? (Y/N):";
    cin>> selection;

    
    } while (selection == 'y' || selection == 'Y');
    cout<<"Thanks"<<endl;
        return 0;
}
