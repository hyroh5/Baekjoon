#include <iostream>
#include <set>
using namespace std;

bool is_prime(int k) {
  if (k == 1) {
    return false;
  }
  for (int i = 2; i*i <= k; i++) {
    if (k % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int m, n;
  set<int> rst;
  cin >> m >> n;

  for (int i=m; i<=n; i++) {
    if (is_prime(i) == true) {
      rst.insert(i);
    }
  }

  for (auto x : rst) {
    cout << x << endl;
  }

  return 0;
}