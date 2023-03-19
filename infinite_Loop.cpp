#include <iostream>
#include <vector>             //this is optional
using namespace std;

int main()
{
for(int i{1}; ;i++){
cout<<i<<endl;
}
    return 0;
}




                             //Infinite loop using while statement



#include <iostream>
#include <vector>  //this is optional
using namespace std;

int main()
{
int i{1};
bool done{false};
while(true){
cout<<i<<endl;
    i++;
}
    return 0;
}






                              //Infinite loop using do while statement



#include <iostream>
#include <vector>  //this is optional
using namespace std;

int main()
{
int i{1};
bool done{false};
do{
cout<<i<<endl;
    i++;
}while(done=true);
    return 0;
}
