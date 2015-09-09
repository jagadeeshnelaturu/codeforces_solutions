#include <iostream>

int main() {
  int n, k;
  std::cin >> n >> k;
  if((n == 1) && (k == 1)) {
    std::cout << "a\n";
    return 0;
  }
  if((k > n) || (k == 1)) {
    std::cout << "-1\n";
    return 0;
  }
  for(int i = 0; i < n - k + 2; ++i) {
    std::cout << ((i & 1) ? 'b' : 'a');
  }
  for(int i = 0; i < k - 2; ++i) {
    std::cout << (char)(i + 'c');
  }
  std::cout << '\n';
}
