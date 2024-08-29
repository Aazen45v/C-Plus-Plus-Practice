#include <iostream>
using namespace std;

int fibNum(int n) {
    if (n == 0) {
        return 0; // Terminate recursion when n is non-positive
    }
    if (n == 1) {
        return 1; // Terminate recursion when n is non-positive
    }
    int ans=fibNum(n-1)+fibNum(n-2);
    return ans;
}

int main() {
    int n;
    cout << "Enter the postion to which you want to find the elememt in the fibonaci sweries ";
    cin >> n;
    int ans=fibNum(n-1);
    cout << ans << endl;
    return 0;
}
