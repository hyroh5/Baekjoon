#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k, p;
  vector<int> bread;

  cin >> n >> k >> p;
  
  for(int i=0; i<n*k; i++) {
    int x;
    cin >> x;
    bread.push_back(x);
  }

  int res = 0;
  for(int i=0; i<n; i++) {
    int non = 0;
    for(int j=0; j<k; j++) {
      if (bread[i*k+j] == 0) non++;
    }
    if (non < p) res++;
  }
  cout << res << endl;

  return 0;
}