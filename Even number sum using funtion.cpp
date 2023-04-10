#include <iostream>
using namespace std;

//creating function to get the grade
int getEvenSum(int n)
{
  int add=0;
  for(int i=0;i<=n;i++){
    if(i%2==0)
    add=add+i;
}
  return add;
}


//creating the main function
int main() {
int number;
cout<<"Enter the number till which sum has to be calculated: ";
cin>>number;
//storing the sum of even numbers
int sum=getEvenSum(number);
cout<<sum<<endl;
  return 0;
}
