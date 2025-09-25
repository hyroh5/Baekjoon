#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  vector<int> div;
  cin >> n >> k;

  for (int i=1; i<=n; i++) {
    if(n%i == 0) div.push_back(i);
  }

  int result = 0;
  if (k <= div.size()) {
    result = div[k-1];
  }
  
  cout << result << endl;

  return 0;
}