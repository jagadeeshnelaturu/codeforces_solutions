#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  int size = s.size(), i, max = 0;
  for(i = 0; i < size; ++i) {
    max = std::max(max, s[i] - '0');
  }
  std::cout << max << '\n';
  while(true) {
    i = 0;
    while((i < size) && (s[i] == '0')) ++i;
    if(i == size) break;
    while(i < size) {
      if(s[i] != '0') {
        std::cout << '1';
        --s[i]; 
      }
      else {
        std::cout << '0';
      }
      ++i;
    }
    std::cout << " ";
  }
  std::cout << '\n';
}
