#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sqrRoot(int target) {
    int ans = -1;
    int start = 0;
    int end = target;
    int mid = start + (end - start) / 2;
    while (start <= end) {
        if (target == mid * mid) {
            ans = mid;
            break;
        } else if (target > (mid * mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    int target;
    cout << "\nEnter the target for which you want to find the square root: " << endl;
    cin >> target;

    int index = sqrRoot(target);
    cout << "Square root of the target is: " << index << endl;

    int precision;
    cout << "\nEnter the precision for which you want to find the square root: " << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = index;
    for (int i = 0; i < precision; i++) {
        while (finalAns * finalAns <= target) {
            finalAns += step;
        }
        finalAns -= step; // Go back one step since finalAns*finalAns exceeded target
        step = step/10;
    }
    cout << "Final Square root of the target is: " << finalAns << endl;
    return 0;
}
