#include <iostream>
using namespace std;

int main() {
  int a, b;
  int m, n;
  cin >> a >> b;

  for (int i=min(a, b); i>=1; i--) {
    if (a%i == 0 && b%i == 0) {
      m = i;
      break;
    }
  }
  for (int i=max(a, b); i<=a*b; i++) {
    if (i%a == 0 && i%b == 0) {
      n = i;
      break;
    }
  }
  
  cout << m << '\n' << n << endl;

  return 0;
}
