#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MostlySorted(int target, vector<int> arr) {
    int ans = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end) {
        if (arr[mid] == target) {
            return mid;
        }
        if (mid > start && arr[mid - 1] == target) {
            return mid - 1;
        }
        if (mid < end && arr[mid + 1] == target) {
            return mid + 1;
        }

        if (target > arr[mid]) {
            start = mid + 2;
        } else {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main() {
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target;
    cout << "\nEnter the target for which you want to find in the array: " << endl;
    cin >> target;

    int index = MostlySorted(target, arr);
    cout << "Index at which number is present is: " << index << endl;

    return 0;
}
