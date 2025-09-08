#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;

  long long res = 0;
  for(int i=0; i<a.size(); i++) {
    for(int j=0; j<b.size(); j++) {
      int x = a[i] - '0';
      int y = b[j] - '0';
      res += x * y;
    }
  }
  cout << res;

  return 0;
}