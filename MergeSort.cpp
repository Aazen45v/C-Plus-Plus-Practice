#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// Function to merge two sorted halves of the array into a single sorted segment
void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Dynamic arrays are used to temporarily hold the left and right halves of the array
    int* left = new int[len1];
    int* right = new int[len2];
    
    int k = s;
    for (int i = 0; i < len1; i++) {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++) {
        right[i] = arr[k];
        k++;
    }

    // Merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2) {
        if (left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        } else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    while (leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while (rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}

// Function to recursively sort the array using merge sort algorithm
void mergeSort(int *arr, int s, int e) {
    if (s >= e) {
        return;
    }
    
    int mid = s + (e - s) / 2;
    
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main() {
    int arr[] = {2, 5, 8, 6, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
