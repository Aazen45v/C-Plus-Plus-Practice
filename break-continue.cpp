#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector<int> values{1,2,-1,3,-1,-99,7,8,10};
for(auto val:values){
if(val== -99)
break;
else if(val==-1)
continue;
else
cout<<val<<endl;
}
        return 0;
}
