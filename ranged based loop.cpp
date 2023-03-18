#include <iostream>
#include <vector>
using namespace std;
                                             //This type of loop is good for string as it reads each and every character of the string
int main() {
for(auto c:"this is a test string")
cout<<c<<endl;
    return 0;
}
