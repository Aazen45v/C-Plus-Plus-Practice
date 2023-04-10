#include <iostream>
using namespace std;

//creating function to get the grade
char getGrade(int n)
{
  if(n>=90)
      return 'A';
    else if(n>=80 && n<90)
      return 'B';
    else if(n>=70 && n<80)
      return 'C';
    else if(n>=60 && n<70)
      return 'D';
    else
      return 'F';
}


//creating the main function
int main() {
int marks;
  cout<<"Enter the marks obtained: ";
  cin>>marks;
  //storing the grade in finalGrade
  char finalGrade=getGrade(marks);
  cout<<finalGrade<<endl;
    return 0;
}
