#include <iostream>

int main() {
  std::string s;
  char c;
  bool done = false;
  while(std::cin >> c) {
    if((!done) && (c == '0')) {
      done = true;
    }
    else {
      s += c;
    }
  }
  if(!done) s = s.substr(1);
  std::cout << s << '\n';
}
