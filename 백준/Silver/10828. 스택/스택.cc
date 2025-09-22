#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {  
  int n;
  vector<int> stack;
  string output;
  cin >> n;

  for(int i=0;i<=n;i++) {
    string text;
    getline(cin, text);

    string cmd;
    int x;
    stringstream ss(text);
    ss >> cmd;

    if (cmd == "push") {
      if (ss >> x) stack.push_back(x);
    }

    if (cmd == "pop") {
      if (stack.empty()) output += "-1\n";
      else {
        int val = stack.back();
        output += to_string(val) + "\n";
        stack.pop_back();
      }
    }

    if (cmd == "size") {
      int val = stack.size();
      output += to_string(val) + "\n";
    }

    if (cmd == "empty") {
      if (stack.empty()) {
        output += "1\n";
      }
      else output += "0\n";
    }

    if (cmd == "top") {
      if (stack.empty()) output += "-1\n";
      else {
        int val = stack.back();
        output += to_string(val) + "\n";
      }
    }
  }
 
 cout << output << endl;
 return 0;
}