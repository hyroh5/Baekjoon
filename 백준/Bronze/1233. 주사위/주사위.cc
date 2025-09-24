#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

int main() {
  int s1, s2, s3;
  int sum;
  unordered_map<int, int> freq;
  cin >> s1 >> s2 >> s3;

  for (int i=1; i<=s1; i++) {
    for (int j=1; j<=s2; j++) {
      for (int k=1; k<=s3; k++) {
        sum = i+j+k;
        if (freq.find(sum) == freq.end()) {
          freq[sum] = 1;
        }
        else freq[sum] += 1;
      }
    }
  }

  int count = 0;
  set<int> maxval;
  for (auto &p : freq) {
    
    // 케이스 분류
    if (p.second > count) {
      count = p.second;
      maxval.clear();
      maxval.insert(p.first);
    }
    else if (p.second ==  count) {
      maxval.insert(p.first);
    }
  }

  cout << *maxval.begin() << endl; //이터레이터
  
  return 0;
}