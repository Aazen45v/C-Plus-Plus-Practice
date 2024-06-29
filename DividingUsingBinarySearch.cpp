#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int quotient(int dividend, int divisor) {
  int ans = 0;
  int start = 0;
  int end = dividend;
  int mid = start + (end - start) / 2;

  while (start <= end) {
    if (abs(mid * divisor) == abs(dividend)) {
      return mid;
    } else if (abs(mid * divisor) < abs(dividend)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }

  if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
    return ans;
  } else {
    return -ans;
  }
}

int main() {
  int dividend = 22;
  int divisor = -7;

  int index = quotient(dividend, divisor);
  cout << "Quotient is : " << index << endl;
  return 0;
}
