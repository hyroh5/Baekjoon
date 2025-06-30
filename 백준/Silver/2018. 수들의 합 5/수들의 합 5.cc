#include <iostream>
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  
  for (int k=1; k<n+1; k++) {
    int validation = 2*n - k*(k-1);
    if (validation <= 0) break;
    if (validation % (2*k) == 0) count++;
    }

    cout << count << '\n';
    
    return 0;
  }