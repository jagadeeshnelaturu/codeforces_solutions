#include <iostream>

int main() {
  char c;
  std::cin >> c;
  std::cout << (((c <= '4') || (c == '9')) ? c : (char)('9' + '0' - c));
  while(std::cin >> c) {
    std::cout << ((c <= '4') ? c : (char)('9' + '0' - c));
  }
  std::cout << '\n';
}
