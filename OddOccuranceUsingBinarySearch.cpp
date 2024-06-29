#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int oddOccurance(vector<int> arr) {
  int ans = 0;
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    
    if (start == end) {
      return arr[mid];
    }
    
    if (mid % 2 == 0) {
      if (arr[mid] == arr[mid + 1]) {
        start = mid + 2;
      } else {
        end = mid;
      }
    }
      
    else {
      if (arr[mid] == arr[mid - 1]) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    
    mid = start + (end - start) / 2;
  }
  return ans;
}

int main() {
  vector<int> arr{2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 3,3,9, 6, 6, 7, 7, 8, 8};
  int index = oddOccurance(arr);
  cout << "Digit whose occurance is odd number of times is: " << index << endl;
  return 0;
}
