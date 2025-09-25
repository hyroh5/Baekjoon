#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int n, k;
  set<int> rev;
  cin >> n >> k;

  for (int i=1; i<=k; i++) {
    string val = to_string(n*i);
    reverse(val.begin(), val.end());
    int rev_val = stoi(val);
    rev.insert(rev_val);
  }

  cout << *rev.rbegin(); //이터레이터

  return 0;
}