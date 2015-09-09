#include <iostream>

int main() {
  int n, p;
  std::cin >> p >> n;
  bool* inserted = new bool[p];
  for(int i = 0; i < p; ++i) {
    inserted[i] = false;
  }
  int temp;
  for(int i = 0; i < n; ++i) {
    std::cin >> temp;
    if(inserted[temp % p]) {
      std::cout << i + 1 << '\n';
      return 0;
    }
    inserted[temp % p] = true;
  }
  std::cout << "-1\n";
}
