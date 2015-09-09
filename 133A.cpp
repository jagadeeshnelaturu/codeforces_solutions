#include <iostream>

int main() {
  char c;
  while(std::cin >> c) {
    if((c == 'H') || (c == 'Q') || (c == '9')) {
      std::cout << "YES\n";
      return 0;
    }
  }
  std::cout << "NO\n";
}
