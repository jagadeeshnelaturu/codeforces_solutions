#include <iostream>

int main() {
  int n;
  std::cin >> n;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      int remainder = i + j + 1 - ((i + j + 1 > n) ? n : 0);
      std::cout << n * j + remainder << ((j == n - 1) ? '\n' : ' ');
    }
  }
}
