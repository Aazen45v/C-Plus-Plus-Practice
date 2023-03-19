#include <iostream>
#include <vector>  //this is optional
using namespace std;

int main()
{
char selection{};
do{
cout<<"\n-----------------------------"<<endl;
  cout<<"1-Do this"<<endl;
  cout<<"2-Do that"<<endl;
  cout<<"3-Do this and that"<<endl;
  cout<<"Q-To exit the code"<<endl;
  cout<<"\nEnter your selection: ";
  cin>>selection;

  
  
  if(selection == '1')
    cout<<"Doing this"<<endl;
  else if(selection == '2')
    cout<<"Doing this"<<endl;
  else if(selection == '3')
    cout<<"Doing this"<<endl;
  else if(selection == 'q' || selection == 'Q')
    cout<<"Ok bye"<<endl;
    else
    cout<<"invalid argument"<<endl;
    
    } while (selection != 'q' && selection != 'Q');  // OR operator not used here idk why didnt told the reason and when tried it actually doesnt work!!
        return 0;
}
