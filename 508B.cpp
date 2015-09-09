#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size();
  char lastDigit = s[size - 1];
  for(int i = 0; i < size - 1; ++i) {
    if(((s[i] - '0') % 2 == 0) && (s[i] < lastDigit)) {
      s[i] ^= s[size - 1] ^= s[i] ^= s[size - 1];
      std::cout << s << '\n';
      return 0;
    }
  }
  for(int i = size - 2; i >= 0; --i) {
    if((s[i] - '0') % 2 == 0) {
      s[i] ^= s[size - 1] ^= s[i] ^= s[size - 1];
      std::cout << s << '\n';
      return 0;
    }
  }
  std::cout << "-1\n";
}
