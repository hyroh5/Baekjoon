#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  vector<int> circle, pl;
  cin >> n >> k;

  for (int i=1; i<n+1; i++) {
    circle.push_back(i);
  }

  int t = k-1;
  while (true) {
    int x = circle[t];
    pl.push_back(x);
    circle.erase(circle.begin()+t);
    int cl = circle.size();
    if (cl == 0) break;
    else t = (t+k-1)%cl;
  }
  
  cout << '<';
  for (int k=0; k<pl.size(); k++) {
    cout << pl[k];
    if (k != pl.size() - 1) cout << ", ";
  }
  cout << '>' << '\n';

  return 0;
}