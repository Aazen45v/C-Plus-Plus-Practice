#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &arr, int n) {
  for (int i = 0; i < n; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    swap(arr[i], arr[minIndex]);
  }
}

int main() {
  vector<int> arr{2, 3, 10, 4, 6, 8, 9};
  int n = arr.size();
  SelectionSort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
