#include <iostream>
using namespace std;

int main() {
  int start, end;
  cin >> start >> end;

  int page = end - start + 1;
  int shot = 0;

  if(page%2 == 0) {
    if(start%2 == 0) shot += (page-2)/2+2;
    else shot += page/2;
  }
  else shot += (page-1)/2+1; 

  cout << shot << endl;

  return 0;
}