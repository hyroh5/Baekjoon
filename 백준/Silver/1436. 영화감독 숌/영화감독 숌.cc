#include <iostream>
#include <string>
using namespace std;

int main() {
  int N, t=0, validation=655;
  cin >> N;

  while (t<N) {
    validation++;
    if (to_string(validation).find("666") != string::npos) { // 여기서 처음에 변수 설정 오류
      t++;
    }
  }

  cout << validation << '\n';
  return 0;
}