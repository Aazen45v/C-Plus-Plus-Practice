#include <iostream>
using namespace std;

int main() {
char letterGrade{};
cout<<"Enter the letter grade you ecpect in the exam"<<endl;
cin>>letterGrade;

switch(letterGrade){
    case 'a':
    case 'A':
    cout<<"You need to score 90 above"<<endl;
    break;
    case 'b':
    case 'B':
    cout<<"You need to score 80 above"<<endl;
    break;
    case 'c':
    case 'C':
    cout<<"You need to score 70 above"<<endl;
    break;
    case 'd':
    case 'D':
    cout<<"You need to score 60 above"<<endl;
    break;
    case 'f':
    case 'F':
    {
        cout<<"Are you sure your entered grade is correct(Y/N)"<<endl;
        char confirm;
        cin>>confirm;
        if(confirm == 'y' || confirm == 'Y')
        cout<<"Guess you didnt want to study at all"<<endl;
        else if(confirm == 'n' || confirm == 'N')
        cout<<"Oh well then study hard!!"<<endl;
        else
        cout<<"Invalid argument"<<endl;
    }
    break;
    default:
    cout<<"invalid grade"<<endl;
}
    return 0;
}
