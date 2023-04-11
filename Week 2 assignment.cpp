#include <iostream>
using namespace std;

//creating function to get the grade
double area(int n)
{
  double ans=0;
    ans=2*3.14*n;
  return ans;
}


//creating function to check if the number is even or odd
string EvenOdd(int n){
  if(n%2==0)
    return "Even";
  else
    return "Odd";
}


//creating function to calculate the factorial
int facto(int n){
  int sum=1;
  for(int i=n;i>0;i--){
        sum=sum*i;
  }
  return sum;
}

string checkPrime(int n){
  int count = 0;
  for(int i=1;i<=n;i++){
      if(n%i==0)
      count++;  
  }
  if(count == 2)
    return "Prime";
  else
    return "Not Prime";
}



//creating the main function
int main() {
int radius;
cout<<"Enter the radius of the circle: ";
cin>>radius;
double displayArea=area(radius);
cout<<"Area of the circle is: "<<displayArea<<endl;
cout<<endl;

  
int number;
cout<<"Enter the number to check whether its even or odd: ";
cin>>number;
string EvenOrOdd=EvenOdd(number);
cout<<"The number is: "<<EvenOrOdd<<endl;
cout<<endl;

  
int factorial;
cout<<"Enter the number to calculate its factorial: ";
cin>>factorial;
int fact=facto(factorial);
cout<<"Factorial of the number is: "<<fact<<endl;
cout<<endl;

  
int PrimeOrNot;
cout<<"Enter the number to check if itds prime or not: ";
cin>>PrimeOrNot;
string prime=checkPrime(PrimeOrNot);
cout<<"Inputed number is: "<<prime<<endl;
cout<<endl;
return 0;
}
