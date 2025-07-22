#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<string, int> check;

  for (int i=0; i<n; i++) {
    string name;
    cin >> name;
    check[name]++;
  }

  int max_val = 0;
  string max_key;

  for (auto &p : check) {
    if (p.second > max_val) {
      max_val = p.second;
      max_key = p.first;
    }
  }

  cout << max_key << "\n";
  return 0;
}