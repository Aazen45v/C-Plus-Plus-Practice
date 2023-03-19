#include <iostream>
#include <vector>  //this is optional
using namespace std;

int main()
{
for(int num1{1};num1<=10;num1++)
{
    for(int num2{1};num2<=10;num2++)
    {
        cout << num1 << "*" << num2 << "=" << num1*num2 <<endl;
    }
    cout<<"-------------"<<endl;
}
    return 0;
}







----------------------------------------------------------Exaple of nested loop with histogram----------------------------------------------------------------




#include <iostream>
#include <vector>  //this is optional
using namespace std;

int main()
{
    int numItems{};
    cout<<"How many data items do you have?";                     //asking users to input their number of data items
    cin>>numItems;
    
    vector<int>data{};                                           //use vectore instead of array because we dont know how many items they are gonna input

for(int i{1};i<=numItems;i++){
    int dataItems{};
    cout<<"Enter data items"<<i<<":";
    cin>>dataItems;
    data.push_back(dataItems);
}


cout<<"\nDisplaying Histogram"<<endl;                                // displaying histogram 
for(auto val:data){
    for(int i{1};i<=val;++i){
        if(i%5==0)                                                    //print * when loop hits multiple of 5
            cout<<"*";
        else
            cout<<"-";
    }
    cout<<endl;
}
    return 0;
}
