#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  if(s[0] != '-') {
    std::cout << s << "\n";
  }
  else if((s.size() == 2) || ((s.size() == 3) && (s[2] == '0'))) {
    std::cout << "0\n";
  }
  else {
    char c1 = s[s.size() - 1], c2 = s[s.size() - 2];
    if(c1 > c2) {
      for(int i = 0; i < s.size() - 1; ++i) {
        std::cout << s[i];
      }
    }
    else if(c1 <= c2) {
      for(int i = 0; i < s.size(); ++i) {
        if(i != s.size() - 2) std::cout << s[i];
      }
    }
    std::cout << '\n';
  }
}
