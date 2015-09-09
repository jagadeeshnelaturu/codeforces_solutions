#include <iostream>

int main() {
  int n, m;
  std::cin >> n >> m;
  int temp;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < m; ++j) {
      std::cin >> temp;
      if(temp && (!i || (i == n - 1) || !j || (j == m - 1))) {
        std::cout << 2 << '\n';
        return 0;
      }
    }
  }
  std::cout << 4 << '\n';
}
