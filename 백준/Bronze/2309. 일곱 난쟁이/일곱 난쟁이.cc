#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  
  vector<int> len;
  int sum = 0, sub, ran;

  for (int i=0; i<9; i++) {
    int x;
    cin >> x;
    sum += x;
    len.push_back(x);
  }

  sub = sum - 100;
  bool found = false; 
  for (int i=0; i<9 && !found; i++) {
    for (int j=i+1; j<9; j++) { 
      if (len[i]+len[j] == sub) {
        len.erase(len.begin() + j);
        len.erase(len.begin() + i);
        found = true;
        break;
      }
    }
  }

  sort(len.begin(), len.end());

  for (int t : len) {
    cout << t << endl;
  }

  return 0;
}