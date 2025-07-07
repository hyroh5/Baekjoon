#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  vector<int> check(9,0);
  string N;

  cin >> N;

  for (char k : N) {
    k = k - '0';
    if (k == 9) k = 6;
    check[k]++;
  }

  check[6] = (check[6]+1)/2;

  int max = *max_element(check.begin(), check.end());
  cout << max;

  return 0;

}