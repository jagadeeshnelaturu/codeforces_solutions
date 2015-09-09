#include <iostream>

int main() {
  std::string s;
  int count = 0, pos, traffic = 0;
  while(std::getline(std::cin, s)) {
    if(s[0] == '+') ++count;
    else if(s[0] == '-') --count;
    else {
      pos = s.find(':');
      traffic += count * (s.size() - pos - 1);
    }
  }
  std::cout << traffic << '\n';
}
