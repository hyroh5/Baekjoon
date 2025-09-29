#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {

  int n;
  long long sum = 0;
  string line;
  vector<int> ver;
  cin >> n;
  cin.ignore();

  getline(cin, line);
  istringstream iss(line);
  int x;

  while (iss >> x) {
    ver.push_back(x);
  }

  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++)
    if (ver[i] > ver[j]) {
      sum += ver[i] - ver[j];
    }
    else {
      sum += ver[j] - ver[i];
    }
  }

  cout << sum*2 << endl;

  return 0;
}