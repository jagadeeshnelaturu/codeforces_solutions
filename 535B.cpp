#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size(), count = (1 << size) - 1, multiplier = 1;
  for(int i = size - 1; i >= 0; --i) {
    if(s[i] == '7') count += multiplier;
    multiplier *= 2;
  }
  std::cout << count << '\n';
}
