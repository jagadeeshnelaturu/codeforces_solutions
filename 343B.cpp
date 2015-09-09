#include <iostream>
#include <stack>

int main() {
  std::stack<char> s;
  char c;
  while(std::cin >> c) {
    if(!s.empty() && (c == s.top())) s.pop();
    else s.push(c);
  }
  std::cout << (s.empty() ? "Yes" : "No") << '\n';
}
