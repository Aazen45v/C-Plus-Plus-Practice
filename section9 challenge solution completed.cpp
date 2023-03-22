#include <iostream>
#include <vector>
#include <algorithm> // added to use sort() function
using namespace std;

int main(){
    vector<int> numbers{};
    char selection{};
    do{
        //display the menu
        cout<<"\nP-to print the array"<<endl;
        cout<<"A-to add a number in array"<<endl;
        cout<<"S-to sum all the integers in the array"<<endl;
        cout<<"M-to find the mean of the array"<<endl;
        cout<<"D-to find the smallest number"<<endl; // added menu option
        cout<<"L-to find the largest number"<<endl;
        cout<<"Q-quit"<<endl;
        cout<<"\nEnter your selected option: ";
        cin>>selection;
        
        if(selection=='p' || selection=='P')
        {
            if(numbers.size()==0)
                cout<<"[]-The list is empty"<<endl;
            else {
                cout<<"[";
                for(auto num:numbers)
                    cout<<num<<" ";
                cout<<"]"<<endl;;
             }
        }
        else if(selection=='A' || selection=='a')
        {
            cout<<"Enter the number to add in array: ";
            int toBeInputted{};
            cin>>toBeInputted;
            numbers.push_back(toBeInputted);
            cout<<toBeInputted<<"\n : Number added"<<endl;
        }
        else if(selection=='s'||selection=='S')
        {
            if(numbers.size()==0)
                cout<<"unable to calculate sum"<<endl;
            else
            {
                int total = 0; // initialize total to 0
                for(auto sum: numbers)
                    total+=sum;
                cout<<"\nYour sum is :"<<total<<endl;
            }
        }
        else if(selection=='m' || selection=='M')
        {
            if(numbers.size()==0)
                cout<<"unable to calculate the mean"<<endl;
            else
            {
                int total = 0; // initialize total to 0
                for(auto num:numbers)
                    total+=num;
                cout<<"The calculated mean of the array is: "<< total/numbers.size()<<endl;
            }
        }
        else if(selection=='L' || selection =='l')
        {
            if(numbers.size()==0)
                cout<<"unable to find the largest number in the array"<<endl;
            else
            {
                sort(numbers.begin(), numbers.end()); // sort the vector
                int largest_element = numbers[numbers.size()-1]; // get the largest element
                cout<<"The largest element in the array is: "<< largest_element << endl;
            }
        }
        else if(selection=='d' || selection =='D') // added new condition
        {
            if(numbers.size()==0)
                cout<<"unable to find the smallest number in the array"<<endl;
            else
            {
                sort(numbers.begin(), numbers.end()); // sort the vector
                int smallest_element = numbers[0]; // get the smallest element
                cout<<"The smallest element in the array is: "<< smallest_element << endl;
            }
        }
    } while(selection!='q'&& selection!='Q');
    cout<<"Goodbye!"<<endl;

    return 0;
}
