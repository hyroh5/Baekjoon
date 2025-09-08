#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> bus;

  for (int i=0; i<n; i++) {
    int s, t;
    cin >> s >> t;

    if (s+t<=x) bus.push_back(s);
  }

  if (bus.size()) {
    cout << *max_element(bus.begin(), bus.end()) << endl;
  }
  else cout << -1 << endl;

  return 0;
}