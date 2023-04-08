#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  cout << endl;

  
  for (int row = 0; row < n; row++) {
    //printing spaces
    for(int col=0;col<n-row-1;col++){
      cout<<" ";
    }
    //printing numbers
    for (int col = 0; col < row + 1; col++) {
      cout<<row+col+1;
    }
    //printing reverse counting
    int start=2*row;
    for(int col=0;col<row;col++){
      cout<<start;
      start--;
    }
    cout << endl;
  }
}

