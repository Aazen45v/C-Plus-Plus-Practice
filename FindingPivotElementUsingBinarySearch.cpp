#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int RotatedArr(vector<int> arr) {
  int pivot = -1;
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (start == end) {
      return arr[start];
    }
    if (mid <= end && arr[mid] > arr[mid + 1]) {
      return arr[mid];
    }

    if (mid - 1 >= start && arr[mid - 1] > arr[mid]) {
      return arr[mid - 1];
    }

    if (arr[start] > arr[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return pivot;
}

int main() {
  vector<int> arr{2, 3, 4, 6, 8, 9, 10};
  int index = RotatedArr(arr);
  cout << "Pivoted element in the rotated array is: " << index << endl;
  return 0;
}
