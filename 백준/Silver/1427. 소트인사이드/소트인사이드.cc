#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string num;
  cin >> num;

  vector<int> digits;

  for (char c : num) {
    digits.push_back(c - '0'); 
  }

  sort(digits.begin(), digits.end(), greater<int>());

  for (int d : digits) {
    cout << d;
  }

  return 0;
}