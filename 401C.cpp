#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  if((m < n - 1) || (m > 2 * n + 2)) {
    std::cout << "-1\n";
  }
  else if(m - n == -1) {
    for(int i = 0; i < m; ++i) {
      std::cout << "01";
    }
    std::cout << "0\n";
  }
  else if(m > 2 * n) {
    for(int i = 0; i < n; ++i) {
      std::cout << "110";
    }
    for(int i = 0; i < m - 2 * n; ++i) {
      std::cout << "1";
    }
    std::cout << '\n';
  }
  else {
    for(int i = 0; i < m - n; ++i) {
      std::cout << "110";
    }
    for(int i = 0; i < 2 * n - m; ++i) {
      std::cout << "10";
    }
    std::cout << '\n';
  }
}
