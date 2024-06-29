#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int quotient(int dividend, int divisor) {
  int ans = 0;
  int start = 0;
  int end = dividend;
  
  while (start <= end) {
    int mid = start + (end - start) / 2;
    
    if (mid * divisor == dividend) {
      return mid;
    } else if (mid * divisor < dividend) {
      ans = mid;  // store the potential answer
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return ans;
}

int main() {
  int dividend = 22;
  int divisor = 7;

  int index = quotient(dividend, divisor);
  cout << "Quotient is : " << index << endl;
  return 0;
}
