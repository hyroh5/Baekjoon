#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> vec;
  for(int i=1; i<n+1; i++) vec.push_back(i);

  while(vec.size() > 1) {
    int count = 0, l;
    l = vec.size();
    for (int k=0; k<l; k++) {
      if (k%2 == 0) {
        vec.erase(vec.begin()+k-count);
        count ++;
      }
    }
  }
  cout << vec[0] << endl;
  
  return 0;
}