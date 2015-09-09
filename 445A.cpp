#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  char c;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      std::cin >> c;
      if(c == '.') {
        std::cout << (((i + j) % 2) ? 'W' : 'B');
      }
      else if(c == '-') {
        std::cout << '-';
      }
    }
    std::cout << '\n';
  }
}
