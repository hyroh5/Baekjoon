#include <iostream>
#include <vector>
#include <string>

int main() {
  int N;
  std::cin >> N;

  std::vector<std::string> L(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> L[i];
  }

  std::string valid = L[0];
  std::string new_valid;

  for (int i=1;i<N;++i) {
    new_valid="";
    for (int k = 0; k < valid.size(); ++k) {
      if (valid[k] == L[i][k]) {
        new_valid += valid[k];
      }
      else {
        new_valid += "?";
      }
    }
    valid = new_valid;
  }

  std::cout << valid << std::endl;
  return 0;
}