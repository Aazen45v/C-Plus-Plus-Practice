#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> IntersectionOfArray(vector<int> arr, vector<int> brr) {
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++) {
      for(int j=0;j<brr.size();j++){
        if(arr[i] == brr[j]){
          ans.push_back(arr[i]);
        }
      }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements to enter in array 1" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements" << endl;
    for(int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    int m;
    cout << "Enter number of elements to enter in array 2" << endl;
    cin >> m;
    vector<int> brr(m);
    cout << "Enter elements" << endl;
    for(int i = 0; i < brr.size(); i++) {
        cin >> brr[i];
    }

    vector<int> result = IntersectionOfArray(arr, brr);

    cout << "Intersection of arrays:" << endl;
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
