#include <iostream>
#include <vector>  //this is optional
using namespace std;

int main(){
    vector<int> numbers{};
    char selection{};
    do{
        //display the menu
        cout<<"\nP-to print the array"<<endl;
        cout<<"A-to add a number in array"<<endl;
        cout<<"S-to sum all the integers in the array"<<endl;
        cout<<"M-to find the smallest number"<<endl;
        cout<<"L-to find the largest number"<<endl;
        cout<<"Q-quit"<<endl;
        cout<<"\nEnter your selected option: ";
        cin>>selection;
        
        if(selection=='p' || selection=='P'){
        if(numbers.size()==0)
            cout<<"[]-The list is empty"<<endl;
        else {
            cout<<"[";
            for(auto num:numbers)
            cout<<num<<" ";
            cout<<"]"<<endl;;
            }
            }
            else if(selection=='A' || selection=='a'){
                cout<<"Enter the number to add in array";
                int toBeInputted{};
                cin>>toBeInputted;
                numbers.push_back(toBeInputted);
                cout<<toBeInputted<<"\n : Number added"<<endl;
            }
            else if(selection=='s'||selection=='S'){
                int total;
                for(auto sum: numbers)
                total+=sum;
                cout<<"\nYour sum is :"<<total<<endl;
            }
    }while(selection!='q'&& selection!='Q');
    cout<<"Goodbye!"<<endl;

    return 0;
}
